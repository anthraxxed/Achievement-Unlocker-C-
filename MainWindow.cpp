
#include "MainWindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QMenuBar>
#include "AchievementPage.h"
#include "GamePage.h"
#include "SettingsPage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Xbox Achievement Unlocker - C++ Edition");
    resize(1000, 700);

    QWidget *central = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(central);

    QHBoxLayout *navLayout = new QHBoxLayout();
    QPushButton *homeBtn = new QPushButton("Home");
    QPushButton *achieveBtn = new QPushButton("Achievements");
    QPushButton *gamesBtn = new QPushButton("Games");

    navLayout->addWidget(homeBtn);
    navLayout->addWidget(achieveBtn);
    navLayout->addWidget(gamesBtn);

    stack = new QStackedWidget(this);
    QLabel *homePage = new QLabel("Welcome to the C++ Xbox Achievement Unlocker!");
    homePage->setAlignment(Qt::AlignCenter);
    stack->addWidget(homePage);
    stack->addWidget(new AchievementPage(this));
    stack->addWidget(new GamePage(this));

    connect(homeBtn, &QPushButton::clicked, this, &MainWindow::showHome);
    connect(achieveBtn, &QPushButton::clicked, this, &MainWindow::showAchievements);
    connect(gamesBtn, &QPushButton::clicked, this, &MainWindow::showGames);

    mainLayout->addLayout(navLayout);
    mainLayout->addWidget(stack);
    setCentralWidget(central);
}

void MainWindow::showHome() { stack->setCurrentIndex(0); }
void MainWindow::showAchievements() { stack->setCurrentIndex(1); }
void MainWindow::showGames() { stack->setCurrentIndex(2); }

MainWindow::~MainWindow() {}
