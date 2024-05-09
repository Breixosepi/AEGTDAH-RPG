#include "Hp.hpp"
    bool setMaxHP(hptype new_max_hp)
    {
        if (new_max_hp < 1)	return false;
        MaxHp = new_max_hp;
        if (CurrentHp > MaxHp)	CurrentHp = MaxHp;
        return true;
    }

	
	
	
	