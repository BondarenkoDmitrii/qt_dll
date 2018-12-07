#ifndef PLUGIN_H
#define PLUGIN_H

#include "plugin_global.h"
#include <plugininterface.h>

class PLUGINSHARED_EXPORT Plugin: public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES( PluginInterface )
    Q_PLUGIN_METADATA(IID "PLUGIN")

public:
    Plugin();

    QString getString() const;
};

#endif // PLUGIN_H
