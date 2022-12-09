#include <iostream>
#include <list>
using namespace std ; 
class Directory(File){
    private : 
        list <Directory> sub_directories = {} ; 
        list <TextFile> text_files = {} ; 
        list <ExecFile> exec_files = {} ; 
        Directory* parent_directory ; 
    public : 
       Directory(list <Directory> x, list <TextFile> y , list <ExecFile> z){
        this->x = sub_directories ;
        this->y = text_files ; 
        this->z = exec_files;
       }
       void set_sub_directories(list<Directory> my_sub_directory) {sub_directories = my_sub_directory}
       list<Directory> get_sub_directories() {return sub_directories ;}
       void set_text_files(list<TextFile> my_text_file) {text_files = my_text_file}
       list<TextFile> get_text_files() {return text_files ;}
       void set_exec_files(list<ExecFile> my_exec_file) {exec_files = my_exec_file}
       list<Exec_files> get_exec_files() {return exec_files ;}    
};

class TextFile(File){
    private : 
    string location ; 
    public : 
    void set_location(string my_location){location = my_location ;}
    std:string get_location(){return location ; }

};