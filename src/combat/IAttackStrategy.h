#ifndef I_ATTACK_STRATEGY_H
#define I_ATTACK_STRATEGY_H
#include <iostream>
#include<string>

class IAttackStrategy
{
public: 
    virtual ~IAttackStrategy() = default;
    virtual void Attack() const = 0;
    virtual int GetPower() const = 0;
};

#endif