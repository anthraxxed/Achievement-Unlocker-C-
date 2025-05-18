
#include "GamePage.h"
#include <QVBoxLayout>
#include <QLabel>

GamePage::GamePage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *label = new QLabel("Games list coming soon!", this);
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    setLayout(layout);
}
