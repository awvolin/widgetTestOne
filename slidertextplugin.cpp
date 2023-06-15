#include <QtUiPlugin/QDesignerCustomWidgetInterface>
#include "slidertextplugin.h"
#include "slidertext.h"

SliderTextPlugin::SliderTextPlugin(QObject *parent)
    : QObject(parent), m_initialized(false)
{
}

void SliderTextPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
    if (m_initialized)
        return;

    m_initialized = true;
}

QString SliderTextPlugin::name() const
{
    return QStringLiteral("SliderText");
}

QString SliderTextPlugin::group() const
{
    return QStringLiteral("Input Widgets");
}

QString SliderTextPlugin::includeFile() const
{
    return QStringLiteral("SliderText.h");
}

QIcon SliderTextPlugin::icon() const
{
    return QIcon();
}

bool SliderTextPlugin::isContainer() const
{
    return false;
}

QWidget* SliderTextPlugin::createWidget(QWidget *parent)
{
    return new SliderText(parent);
}

bool SliderTextPlugin::isInitialized() const
{
    return m_initialized;
}

QString SliderTextPlugin::toolTip() const
{
    return QString();
}

QString SliderTextPlugin::whatsThis() const
{
    return QString();
}

QString SliderTextPlugin::domXml() const
{
    return R"(
<ui language="c++">
 <widget class="SliderText" name="sliderText"/>
</ui>
)";
}
