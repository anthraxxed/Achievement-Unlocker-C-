
#include "SettingsPage.h"
#include <QVBoxLayout>
#include <QLabel>

SettingsPage::SettingsPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *label = new QLabel("Settings will go here.", this);
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    setLayout(layout);
}
