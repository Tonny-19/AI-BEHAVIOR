#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"
#include "SwordAttack.h"

class Warrior : public Character
{
public:
    Warrior(const std::string& name);
    void OnUpdate(StateMachine& fsm) override;
};

#endif