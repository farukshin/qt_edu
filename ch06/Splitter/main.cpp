#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplitter spl(Qt::Vertical);

    QTextEdit* ptxt1 = new QTextEdit;
    QTextEdit* ptxt2 = new QTextEdit;

    spl.addWidget(ptxt1);
    spl.addWidget(ptxt2);

    ptxt1->setPlainText("Line1\n"
                        "Line2\n"
                        "Line3\n"
                        "Line4\n"
                        "Line5\n"
                        "Line6\n"
                        "Line7\n"
                        );
    ptxt2->setPlainText(ptxt1->toPlainText());

    spl.resize(200, 220);
    spl.show();

    return a.exec();
}
