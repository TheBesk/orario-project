#ifndef ORARIO_H
#define ORARIO_H

class orario{
private:
	int sec;
public:
	orario(int o=0, int m=0, int s=0);
  orario operator+(orario x) const;
	orario operator-(orario x) const;
	int ore() const;
	int minuti() const;
	int secondi() const;	
};
#endif
