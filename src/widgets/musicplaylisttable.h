#ifndef MUSICPLAYLISTTABLE_H
#define MUSICPLAYLISTTABLE_H

#include <QTableView>
#include <QStandardItemModel>
#include <QVector>

class MusicPlayListTable : public QTableView
{
    Q_OBJECT
public:
    explicit MusicPlayListTable(QWidget *parent = nullptr);

public:
    QStandardItemModel *head;

signals:
    void countChanged(const int);

public slots:
    void update_list(const QVector<QStringList> &);
    void update_list(const QStringList &);
};

#endif // MUSICPLAYLISTTABLE_H
