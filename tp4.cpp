#include<iostream>
#include<string>
#include<list>

using namespace std;

struct Date{
    int day;
    int month;
    int year;
};


class File{
    public:
        File(string name ,int permission[3],Date date){
            this->name = name;
            for(int i=0;i<3;i++) this->permission[i] = permission[i];
            this->date.day = date.day; this->date.month = date.month; this->date.year = date.year;

        }
        void set_name(string my_name){name = my_name;}
        int* get_permission(){return permission;}
        string get_name(){return name;}
        //void set_date(int my_day,int my_month,int my_year){date_creation = {my_day,my_month,my_year};}
        Date get_date(){return date;}
    private:
        string name;
        int permission[3];
        Date date;
};

class TextFile : public File{
    public: 
        void set_location(string my_location){location = my_location ;}
        string get_location(){return location ; }
    private: 
        string location ; 
};

//everything till this point works 
/*
class Directory : public File{
    public: 
        Directory(list <Directory> x, list <TextFile> y){
            this->x = sub_directories ;
            this->y = text_files ; 
       }  
    private : 
        list <Directory> sub_directories; 
        list <TextFile> text_files; 
        //list <ExecFile> exec_files; 
        Directory* parent_directory; 
};
*/
int main(){
    int rights[] = {'r','w','x'};
    File file("test_file",rights,{11,03,2003});
    cout<<file.get_name()<<endl;
    cout<<file.get_permission()[0]<<endl;
    return 0;
}