#ifndef MYWIDGETCOLLECTIONPLUGIN_H
#define MYWIDGETCOLLECTIONPLUGIN_H

#include <QtUiPlugin/QDesignerCustomWidgetCollectionInterface>
#include "slidertextplugin.h"

class MyWidgetCollectionPlugin : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface" FILE "mywidgetcollectionplugin.json")
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)

public:
    explicit MyWidgetCollectionPlugin(QObject *parent = nullptr);

    QList<QDesignerCustomWidgetInterface*> customWidgets() const override;

private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif // MYWIDGETCOLLECTIONPLUGIN_H
