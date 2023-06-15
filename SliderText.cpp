#include "slidertext.h"

SliderText::SliderText(QWidget *parent)
    : DelayedInitializationWidget(parent)
{
    // Set up a validator to limit input to numbers between 0 and 100
    m_lineEdit.setValidator(new QIntValidator(0, 100, this));

    // Set the slider orientation to horizontal
    m_slider.setOrientation(Qt::Horizontal);

    // Connect signals and slots for the slider and line edit
    connect(&m_slider, &QSlider::valueChanged, this, &SliderText::onSliderValueChanged);
    connect(&m_lineEdit, &QLineEdit::textChanged, this, &SliderText::onLineEditTextChanged);

    // Set the initial slider value
    m_slider.setValue(0);
}

void SliderText::initialize()
{
    auto layout = new QHBoxLayout(this);
    // Add the slider to the layout before the line edit
    layout->addWidget(&m_slider);
    layout->addWidget(&m_lineEdit);
}

void SliderText::onSliderValueChanged(int value)
{
    m_lineEdit.setText(QString::number(value));
}

void SliderText::onLineEditTextChanged(const QString &text)
{
    bool ok;
    int value = text.toInt(&ok);

    // if the text in the QLineEdit can be converted to an int (ok == true),
    // set the slider value to this int
    if (ok)
        m_slider.setValue(value);

    QPalette palette = m_lineEdit.palette();
    if (value > 100 || value <0 ||!ok ) {
        palette.setColor(QPalette::Text, Qt::red);
        m_lineEdit.setPalette(palette);
    } else {
        palette.setColor(QPalette::Text, Qt::black);
        m_lineEdit.setPalette(palette);
    }
}
