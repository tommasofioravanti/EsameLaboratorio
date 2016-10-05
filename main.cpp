#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    //creo finestra
    QMainWindow *window = new QMainWindow();
    window->setWindowTitle(QString::fromStdString("EsameLaboratorio"));
    window->resize(550,300);

    QTableWidget* table = new QTableWidget(4,5);

    table->setHorizontalHeaderLabels(QString("Numeri; Sum; Mean; Min; Max").split(";"));
    table->show();
    window->setCentralWidget(table);
    window->show();
    return app.exec();
}