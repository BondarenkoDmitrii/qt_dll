#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QString>
#include <QtPlugin>

class PluginInterface {
public:
    virtual ~PluginInterface() { }

    virtual QString getString() const = 0;
};

Q_DECLARE_INTERFACE( PluginInterface, "com.mysoft.Application.PluginInterface" )



#endif // PLUGININTERFACE_H
