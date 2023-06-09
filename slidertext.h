#pragma once

#include <QLineEdit>
#include <QSlider>
#include <QHBoxLayout>
#include <QIntValidator>
#include "DelayedInitializationWidget.h"

class SliderText : public DelayedInitializationWidget<QWidget>
{
    Q_OBJECT

public:
    explicit SliderText(QWidget *parent = nullptr);

protected:
    void initialize() override;

private slots:
    void onSliderValueChanged(int value);
    void onLineEditTextChanged(const QString &text);

private:
    QLineEdit m_lineEdit;
    QSlider m_slider;
};
