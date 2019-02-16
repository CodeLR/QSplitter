#include <frame.h>

Frame::Frame(QWidget *parent)
    :QFrame(parent)
{

    splitter=new QSplitter(Qt::Horizontal);
    splitter2=new QSplitter(Qt::Vertical);

    butCancel=new QPushButton("Cancel",this);
    butOK=new QPushButton("OK",this);
    listView=new QListView(this);
    combobox=new QComboBox(this);
    layout=new QHBoxLayout(this);
    layout2=new QVBoxLayout(this);

    splitter->addWidget(listView); // Первый сплиттер
    splitter->addWidget(splitter2);// добавляем в центр второй сплиттер

    splitter2->addWidget(combobox); // Второй сплиттер
    splitter2->addWidget(butOK); //
    splitter2->addWidget(butCancel);//

    splitter->setStretchFactor(0,1);// растяжка
    splitter->setStretchFactor(1,2);
    splitter2->setStretchFactor(0,3);
    splitter2->setStretchFactor(1,0);

    layout->addWidget(splitter); // Добавляем в лайаут
    layout2->addWidget(combobox);
    layout2->addWidget(butOK);
    layout2->addWidget(butCancel);
    layout2->addWidget(splitter2);


}
