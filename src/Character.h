#ifndef CHARACTER_H
#define CHARACTER_H
#include <memory>
#include <string>
#include "IAttackStrategy.h"

enum class CharacterStatus
{
    ALIVE,
    DEAD
};

class Character
{
protected:
    int mHealth;
    std::string mName;
    std::unique_ptr<IAttackStrategy> mAttackStrategy;

public:
    Character(const std::string& name, int health, std::unique_ptr<IAttackStrategy> strategy);
    virtual ~Character() = default;

    virtual void OnUpdate(class StateMachine& fsm) = 0;

    void Attack() const;
    void TakeDamage(int amount);
    int GetHealth() const;
    std::string GetName() const;
    bool IsAlive() const;
};

#endif