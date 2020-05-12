#pragma once
#include <QSyntaxHighlighter>

class QTextDocument;

class SyntaxHighlighter: public QSyntaxHighlighter {
Q_OBJECT
private:
    QStringList m_lstKeywords;

protected:
    enum { NormalState = -1, InsideCStyleComment, InsideCString };

    virtual void highlightBlock(const QString&);

    QString getKeyword(int i, const QString& str) const;

public:
    SyntaxHighlighter(QTextDocument* parent = 0);
};
