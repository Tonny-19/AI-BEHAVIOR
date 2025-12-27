#include "Warrior.h"
#include "StateMachine.h"

Warrior::Warrior(const std::string& name)
    : Character(name, 120, std::make_unique<SwordAttack>())
{
}

void Warrior::OnUpdate(StateMachine& fsm)
{
    if(!IsAlive())
        return;

    std::cout << "ETAT: WARRIOR_IDLE"<< std::endl;
}