#ifndef SLIDERTEXTPLUGIN_H
#define SLIDERTEXTPLUGIN_H

#include <QtUiPlugin/QDesignerCustomWidgetInterface>

class SliderTextPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit SliderTextPlugin(QObject *parent = nullptr);

    QString name() const override;
    QString group() const override;
    QString includeFile() const override;
    QIcon icon() const override;
    bool isContainer() const override;
    QWidget *createWidget(QWidget *parent) override;
    bool isInitialized() const override;
    void initialize(QDesignerFormEditorInterface *core) override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QString domXml() const override;

private:
    bool m_initialized;
};

#endif // SLIDERTEXTPLUGIN_H
