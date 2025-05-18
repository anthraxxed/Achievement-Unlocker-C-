
#include "AchievementPage.h"
#include <QVBoxLayout>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

AchievementPage::AchievementPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QListWidget *list = new QListWidget(this);

    QFile file("assets/example.json");
    if (file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonArray array = doc.array();

        for (const QJsonValue &val : array) {
            QJsonObject obj = val.toObject();
            list->addItem(obj["name"].toString() + " - " + obj["status"].toString());
        }
    }

    layout->addWidget(list);
    setLayout(layout);
}
