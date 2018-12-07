#include <QCoreApplication>
#include <QDir>
#include <QPluginLoader>
#include <QDebug>

#include "plugininterface.h"

int main() {
    QPluginLoader loader;
    loader.setFileName("C:/Users/bonda/Documents/dll_Plugin/Plugin.dll");
    QObject *possiblePlugin = loader.instance();
    PluginInterface *plugin = qobject_cast<PluginInterface*>(possiblePlugin);
    if (plugin){
        qDebug() << plugin->getString();
    }
    else{
        qDebug() << loader.errorString();
    }

    return 0;
}
