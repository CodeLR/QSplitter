#ifndef FRAME_H
#define FRAME_H
#include <QFrame>
#include <QPushButton>
#include <QListView>
#include <QComboBox>
#include <QGridLayout>
#include <QSplitter>
#include <QHBoxLayout>
#include <QPalette>
class Frame:public QFrame
{
  Q_OBJECT
private:
    QSplitter   *splitter;
    QSplitter   *splitter2;
    QPushButton *butCancel;
    QPushButton *butOK;
    QListView   *listView;
    QComboBox   *combobox;
    QHBoxLayout *layout;
    QVBoxLayout *layout2;
public:
    Frame(QWidget *parent=0);
    virtual~Frame(){}
};
#endif // FRAME_H
