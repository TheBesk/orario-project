#include "orario.h"

orario::orario(int o, int m, int s){
if(sec<0 || sec>86400)
sec=0;
else
sec=s+m*60+o*3600;
}

orario orario::operator+(orario x) const{
return (sec+x.sec)%86400;
}

orario orario::operator-(orario x) const{
return (sec-x.sec)%86400;
}

int orario::ore() const{
return sec/3600;
}

int orario::minuti() const{
return (sec/60)%60;
}

int orario::secondi() const{
return sec%60;
}
