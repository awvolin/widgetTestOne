#include "MyWidgetCollectionPlugin.h"
#include "SliderTextPlugin.h"

MyWidgetCollectionPlugin::MyWidgetCollectionPlugin(QObject *parent)
    : QObject(parent), m_widgets({new SliderTextPlugin(this)})
{
}

QList<QDesignerCustomWidgetInterface*> MyWidgetCollectionPlugin::customWidgets() const
{
    return m_widgets;
}
