std::string file_by_row(std::ifstream &inf){
  std::string st ;
  //if(inf.is_open()){
  try{  
    std::getline(inf,st);
    return st;  
  }catch(...){
    throw("File non aperto");  
  }
  //nel caso non sia aperta devo tornare una stringa 
}
