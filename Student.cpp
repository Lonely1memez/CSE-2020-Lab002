#ifndef STUDENT_H
#define STUDENT_H

#include<string>
#include<iostream>

using namespace std;

class Student
{
   public:
   //Default constructor
   Student()
   {

   }
   //creates a student with the specified id and name
   Student(int idvalue,const string& namevale)
   {
       set_id(idvalue);
       set_name(namevale);
   }

   //returns the Student name
   string get_name() const
   {
       return name;
   }

   //Return the Student id
   int get_id() const
   {
       return id;
   }

   //set the Student name
   void set_name(const string& namevalue)
   {
       name = namevalue;
   }

   //set the Student id
   void set_id(int idvalue)
   {
        id = idvalue;   
   }
   void print_student() const
   {
        cout<<id<<" "<<name<<endl;
   }
   private:
      //Student name
      string name;
      //Student id
      int id;
};
#endif