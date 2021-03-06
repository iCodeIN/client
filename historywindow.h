#ifndef HISTORYWINDOW_H
#define HISTORYWINDOW_H

#include <QMainWindow>
#include "library/tlmessages.h"
#include "flickcharm.h"
#include "historyitemmodel.h"
#include <QAction>

namespace Ui {
class HistoryWindow;
}

class TelegramClient;

class HistoryWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit HistoryWindow(TelegramClient *client, TLInputPeer input, QWidget *parent = 0);
    ~HistoryWindow();

public slots:
    void sendButton_clicked();
    void backAction_triggered();

private:
    Ui::HistoryWindow *ui;
    FlickCharm flickcharm;
    TelegramClient* client;
    HistoryItemModel* model;
    QAction backAction;
};

#endif // HISTORYWINDOW_H
