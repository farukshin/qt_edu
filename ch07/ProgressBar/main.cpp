#include <QtWidgets>
#include <ProgressBar.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProgressBar progress;
    progress.show();

    return a.exec();
}

