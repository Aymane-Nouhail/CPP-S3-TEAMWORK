#include <iostream>
#include <list>

class Directory(file){
    private : 
        std::list <Directory> sub_directories = {} ; 
        std::list <TextFile> text_files = {} ; 
        std::list <ExecFile> exec_files = {} ; 
        directory* parent_directory ; 
    public : 
       void set_sub_directories(std::list<Directory> my_sub_directory) {sub_directories = my_sub_directory}
       std::list<Directory> get_sub_directories() {return sub_directories}
       void set_text_files(std::list<TextFile> my_text_file) {text_files = my_text_file}
       std::list<TextFile> get_text_files() {return text_files}
       void set_exec_files(std::list<ExecFile> my_exec_file) {exec_files = my_exec_file}
       std::list<Exec_files> get_exec_files() {return exec_files}
};






class TextFile(File){
    private : 
    std::string location ; 
    public : 
    void set_location(std::string my_location){location = my_location ;}
    std:string get_location(){return location ; }

};