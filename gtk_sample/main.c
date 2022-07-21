#include <gtk/gtk.h>

static void
activate(GtkApplication *app,
         gpointer user_data)
{
    GtkWidget *window;

    // Cria uma nova janela na aplicação GTK
    window = gtk_application_window_new(app);

    // Define o título da janela
    gtk_window_set_title(GTK_WINDOW(window), "Hello GTK");

    // Define o tamanho da janela
    gtk_window_set_default_size(GTK_WINDOW(window), 500, 500);

    // Mostra recursivamente um widget e quaisquer widgets filhos
    gtk_widget_show_all(window);
}

int main(int argc, char **argv)
{
    GtkApplication *app;
    int status;

    // Cria uma aplicação GTK
    app = gtk_application_new("dev.gmvbr.learning",
                              G_APPLICATION_FLAGS_NONE);

    // Cria um sinal de ativação
    g_signal_connect(app, "activate",
                     G_CALLBACK(activate), NULL);

    // Inicia a aplicação
    status = g_application_run(G_APPLICATION(app), argc, argv);

    // Diminui a contagem de referência de object.
    // Quando sua contagem de referência cai para 0,
    // o objeto é finalizado (ou seja, sua memória é liberada).
    g_object_unref(app);

    return (status);
}
