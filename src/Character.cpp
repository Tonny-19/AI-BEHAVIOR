#include "Character.h"

Character::Character(const std::string& name, int health, std::unique_ptr<IAttackStrategy> strategy)
    : mHealth(health), mName(name), mStatus(CharacterStatus::ALIVE), mAttackStrategy(std::move(strategy))
{
}

void Character::Attack() const
{
    mAttackStrategy->Attack();
}

void Character::TakeDamage(int amount)
{
    mHealth-= amount;
    if(mHealth<=0)
    {
        mHealth = 0;
        mStatus = CharacterStatus::DEAD;
    }
}
int Character::GetHealth()const
{
    return mHealth;
}

std::string Character::GetName()const
{
    return mName;
}
bool Character::IsAlive() const
{
    return mStatus == CharacterStatus::ALIVE;
}