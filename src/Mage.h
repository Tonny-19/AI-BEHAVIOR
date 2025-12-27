#ifndef MAGE_H
#define MAGE_H

#include "Character.h"
#include "MagicAttack.h"

class Mage : public Character
{
public: 
    Mage(const std::string& name);
    void OnUpdate(StateMachine& fsm) override;
};

#endif