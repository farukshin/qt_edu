#include <QtWidgets>
#include "KeyFilter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLineEdit txt("User input: ");
    txt.show();

    KeyFilter* pFilter = new KeyFilter(&txt);
    txt.installEventFilter(pFilter);

    return a.exec();
}
