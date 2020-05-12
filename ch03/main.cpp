#include <QtCore>

int main(int argc, char *argv[])
{
    qDebug() << "License Products:"
             << QLibraryInfo::licensedProducts();

    qDebug() << "Licensee:"
             << QLibraryInfo::licensee();

    qDebug() << "Is debug build:"
             << QLibraryInfo::isDebugBuild();

    qDebug() << "Location";

    qDebug() << " Headers:"
             << QLibraryInfo::location(QLibraryInfo::HeadersPath);
    qDebug() << " Libraries:"
             << QLibraryInfo::location(QLibraryInfo::LibrariesPath);
    qDebug() << " Binaries:"
             << QLibraryInfo::location(QLibraryInfo::BinariesPath);
    qDebug() << " Prefix:"
             << QLibraryInfo::location(QLibraryInfo::PrefixPath);
    qDebug() << " Documentation:"
             << QLibraryInfo::location(QLibraryInfo::DocumentationPath);
    qDebug() << " Plugins:"
             << QLibraryInfo::location(QLibraryInfo::PluginsPath);
    qDebug() << " Data:"
             << QLibraryInfo::location(QLibraryInfo::DataPath);
    qDebug() << " Settings:"
             << QLibraryInfo::location(QLibraryInfo::SettingsPath);
    qDebug() << " Examples:"
             << QLibraryInfo::location(QLibraryInfo::ExamplesPath);

}
