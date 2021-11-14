#pragma once
#include "Global.h"
#include <MCApi/Actor.hpp>
class Actor;
class UserEntityIdentifierComponent;

struct ActorObj : public Actor {
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    LIAPI bool isSimulatedPlayer();
    LIAPI  bool isPlayer();
    LIAPI std::string getEntityTypeName();
    LIAPI bool ActorObj::hurtEntity(int damage);
    LIAPI Vec2* getDirction();
};
