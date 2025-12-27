#ifndef ARCHER_H
#define ARCHER_H
#include "Character.h"
#include "BowAttack.h"

class Archer : public Character
{
public:
    Archer(const std::string& name);
    void OnUpdate(StateMachine& fsm) override;
};

#endif