#ifndef USER_INFO_H
#define USER_INFO_H
#include<QChar>
#include<QString>

struct comment{
    QString sender;
    QString content;
};

struct moment{
    QString range;
    QString sender;
    QString text;
    QList<QString>likes;
    QList<comment>comments;//(格式直接做成phone+内容)
};
struct USER{
    QString name;
    QString phone;
    QString password;
    int name_permit;//是否通过昵称添加
    int phone_permit;//是否手机号添加
    int verti_way;//加好友验证方式
    int succeed;//是否登录状态下（可能用不上）
    QList<QString>contact;
    QString question;
};

struct record{
    QString from;
    QString to;
    QString content;
};

struct application{
    QString from;
    QString to;
    QString accepted;//1成功，0失败，2申请中
    QString answer;
};

struct user{// 用于小游戏的虚拟用户，不与聊天用户相关
    QString name;
    QString password;
    int times;//比赛次数，0起始，3终止，参与排名的不为0
    int correct;// num of correct ones
    double time;//用时

};
struct question{
    //int seqnum;
    QString quest;
    QChar answer;
    QString option;
};

#endif // USER_INFO_H
