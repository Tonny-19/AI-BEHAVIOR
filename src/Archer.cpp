#include "Archer.h"
#include "StateMachine.h"

Archer::Archer(const std::string& name)
    : Character(name, 90, std::make_unique<BowAttack>())
{
}

void Archer::OnUpdate(StateMachine& fsm)
{
    if (!IsAlive())
        return;

    std::cout<< "ETAT: ARCHER_SCOUTING" <<std::endl;
}