#include "Mage.h"
#include "StateMachine.h"

Mage::Mage(const std::string& name)
    : Character(name,80, std::make_unique<MagicAttack>())
{
}

void Mage::OnUpdate(StateMachine& fsm)
{
    if (!IsAlive())
        return;

    std::<<"ETAT: MAGE_MEDITATING"<<std::endl;   
}