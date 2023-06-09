#include "widget.h"
#include<QDebug>
#include <QApplication>
#include<QTextStream>
#include<QFile>
#include"login.h"
#include<QList>
#include"user_info.h"
#include "mainwindow.h"
#include<QTimer>


QList<user>usrlist;

QList<question>questionlist;

QList<application>applyList;
QList <record>Record;
QList<USER>list;
QList<moment>Moment;


int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5,12,12))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QFile file("./users.txt");
     bool isok = file.open(QIODevice::ReadOnly|QIODevice::Text);
     if(isok==true){
         QTextStream in(&file);
         QString s1,s2,s3;
         int f1,f2,f4;
         in>>s1>>s2>>s3>>f1>>f2>>f4;
            while(!in.atEnd()){
                in.setCodec("UTF-8");
                if(s1!=""){
                USER user;
                user.name=s1;user.phone=s2;user.password=s3;
                user.name_permit =f1;user.phone_permit=f2;
                user.verti_way=f4;
                user.succeed=0;
                list<<user;
                in>>s1>>s2>>s3>>f1>>f2>>f4;
                }
            }
       for(int i=0;i<list.size();i++)qDebug()<<list[i].name<<list[i].name_permit;
     }
     else qDebug()<<"error";
      file.close();

     QFile file1("contact.txt");
     bool isok1=file1.open(QIODevice::ReadOnly|QIODevice::Text);
     int num=0;
     if(isok1==true){
         QTextStream in(&file1);
          in.setCodec("UTF-8");
         QStringList lis;
         QString s;
         s= in.readLine();
         if(s!=""){
         lis=s.split(" ",QString::SkipEmptyParts);
         for(int i=0;i<lis.size();i++){
             if(lis[i]!="\n"){
                 list[num].contact<<lis[i];
                 qDebug()<<list[num].contact<<lis[i];
             }
         }//去掉\n
         num++;
         lis.clear();s.clear();
         }

         while(!in.atEnd()){
           s= in.readLine();
           if(s!=""){
           lis=s.split(" ",QString::SkipEmptyParts);
           for(int i=0;i<lis.size();i++){
               if(lis[i]!="\n"){
                   list[num].contact<<lis[i];
                   qDebug()<<list[num].contact<<lis[i];
               }
           }//去掉\n
           num++;
           lis.clear();s.clear();
            }
         }
     }
     else qDebug()<<"error";
     file1.close();

     QFile file2("chatRecord.txt");
     bool isok2=file2.open(QIODevice::ReadOnly|QIODevice::Text);
     if(isok2){
         QTextStream in(&file2);
         QStringList lis;
         QString s;
         s=in.readLine();
         record re;
          in.setCodec("UTF-8");

         if(s!=""){
             lis=s.split(" ");
             re.from=lis[0];
             re.to=lis[1];
             re.content=s.replace(lis[0]+" "+lis[1]+" ","");
             Record<<re;
         }

         while(!in.atEnd()){
             lis.clear();
             s.clear();
             s=in.readLine();

             if(s!=""){
                 lis=s.split(" ");
                 re.from=lis[0];
                 re.to=lis[1];
                 re.content=s.replace(lis[0]+" "+lis[1]+" ","");
                 Record<<re;
             }

         }
     }
     else qDebug()<<"error"<<endl;
     file2.close();

     QFile file3("question.txt");
      bool isok3=file3.open(QIODevice::ReadOnly|QIODevice::Text);
     if(isok3){
         QTextStream in(&file3);
         QStringList lis;
         QString s;
         in.setCodec("UTF-8");
         s=in.readLine();
         if(s!=""){
             lis=s.split(" ");
             for(int i=0;i<list.size();i++){
                 if(lis[0]==list[i].phone)list[i].question=lis[1];
             }
         }

         while(!in.atEnd()){
             lis.clear();
             s.clear();
             s=in.readLine();
             if(s!=""){
                 lis=s.split(" ");
                 for(int i=0;i<list.size();i++){
                     if(lis[0]==list[i].phone)list[i].question=lis[1];
                 }
             }
         }
     }
     else qDebug()<<"error"<<endl;
     file3.close();

     QFile file4("application.txt");
      bool isok4=file4.open(QIODevice::ReadOnly|QIODevice::Text);
      if(isok4){
          QTextStream in(&file4);
          QStringList lis;
          QString s;
          in.setCodec("UTF-8");
          s=in.readLine();
          if(s!=""){
              lis=s.split(" ",QString::SkipEmptyParts);
             application app;
             app.from=lis[0];
             app.to=lis[1];
             app.accepted=lis[2];
             app.answer=lis.size()==3?"":lis[3];
             applyList<<app;
             qDebug()<<app.answer;
          }

          while(!in.atEnd()){
              lis.clear();
              s.clear();
              s=in.readLine();
              if(s!=""){
                  lis=s.split(" ",QString::SkipEmptyParts);
                  application app;
                  app.from=lis[0];
                  app.to=lis[1];
                  app.accepted=lis[2];
                  app.answer=(lis.size()==3?"":lis[3]);
                  applyList<<app;
                  qDebug()<<app.answer;
              }
          }
      }
      else qDebug()<<"error"<<endl;
      file4.close();


      QFile file5("moments.txt");
       bool isok5=file5.open(QIODevice::ReadOnly|QIODevice::Text);
       if(isok5){
           QTextStream in(&file5);
           QStringList lis;
           QString s;
           in.setCodec("UTF-8");

           while(!in.atEnd()){
               moment mom;
               s=in.readLine();
               lis=s.split(" ",QString::SkipEmptyParts);
               mom.range=lis[0];
               mom.sender=lis[1];
               mom.text=lis[2];

               s.clear();
               lis.clear();

               s=in.readLine();
              lis=s.split(" ",QString::SkipEmptyParts);
              for(int i=0;i<lis.size();i++)mom.likes<<lis[i];

              s.clear();
              lis.clear();

              comment cc;
              s=in.readLine();
             lis=s.split(" ",QString::SkipEmptyParts);
             for(int i=0;i<lis.size();i++){
                 if(i%2==0)cc.sender=lis[i];
                 else {
                     cc.content=lis[i];
                     mom.comments<<cc;
                 }
             }

             s.clear();
             lis.clear();
             Moment<<mom;
           }
       }
       else qDebug()<<"error"<<endl;
       file5.close();


       QFile file6("game_user.txt");
              bool isok6 = file6.open(QIODevice::ReadOnly|QIODevice::Text);
              if(isok6==true){
                  QTextStream in(&file6);
                  in.setCodec("UTF-8");
                  QStringList ls;
                  QString str;
                  QString s1,s2;

                  int f1,f2;
                  double f3;
                  str=in.readLine();
                  //str.remove(QChar('\n'), Qt::CaseInsensitive);
                   if(str!=""){
                  ls=str.split(" ",QString::SkipEmptyParts);
                  s1=ls[0];s2=ls[1];
                  f1=ls[2].toInt();
                  f2=ls[3].toInt();
                  f3=ls[4].toDouble();
                  for(int i=0;i<ls.size();i++)qDebug()<<ls[i];
                  user u;
                 u.name=s1;u.password=s2;
                 u.times=f1;u.correct=f2;u.time=f3;
                  usrlist<<u;
                   }
                     while(!in.atEnd()){
                         str.clear();
                         ls.clear();
                         str=in.readLine();
                         if(str!=""){
                        ls=str.split(" ",QString::SkipEmptyParts);
                        s1=ls[0];s2=ls[1];
                        f1=ls[2].toInt();
                        f2=ls[3].toInt();
                        f3=ls[4].toDouble();
                        user u;
                       u.name=s1;u.password=s2;
                       u.times=f1;u.correct=f2;u.time=f3;
                        usrlist<<u;
                         }
                     }

              }for(int i=0;i<usrlist.size();i++)qDebug()<<usrlist[i].name<<usrlist[i].time;
              if(!isok6) qDebug()<<"error";
               file6.close();


               QFile file7("exam.txt");
                   bool isok7=file7.open(QIODevice::ReadOnly|QIODevice::Text);
                   if(isok7==true){
                       QTextStream in(&file7);
                       in.setCodec("UTF-8");
                       QStringList ls;
                       QString s1,s2;
                       s1=in.readLine();
                       s2=in.readLine();
                       if(s1!=""&&s2!=""){
                           s1.replace(" ","");
                           ls=s1.split(".",QString::SkipEmptyParts);
                           question que;
                           que.option=s2;
                           int pos=ls[1].indexOf("A")+ls[1].indexOf("B")+ls[1].indexOf("C")+2;
                           que.answer=ls[1][pos];
                           que.quest=ls[1].replace("A","__");
                           que.quest=ls[1].replace("B","__");
                           que.quest=ls[1].replace("C","__");
                           questionlist<<que;
                       }
                       while(!in.atEnd()){
                           ls.clear();s1.clear();s2.clear();
                           s1=in.readLine();
                           s2=in.readLine();
                           if(s1!=""&&s2!=""){
                               ls=s1.split(".",QString::SkipEmptyParts);
                               question que;
                               que.option=s2;
                               int pos=ls[1].indexOf("A")+ls[1].indexOf("B")+ls[1].indexOf("C")+2;
                               que.answer=ls[1][pos];
                               que.quest=ls[1].replace("A","__");
                               que.quest=ls[1].replace("B","__");
                               que.quest=ls[1].replace("C","__");
                               questionlist<<que;
                           }
                       }
                   }for(int i=0;i<5;i++)qDebug()<<questionlist[i].quest<<questionlist[i].answer<<questionlist[i].option;
                   if(!isok7)qDebug()<<"error";
                   file7.close();




    QApplication a(argc, argv);
    Widget w;
    w.show();//qDebug()<<succeed.name;
    return a.exec();
}
