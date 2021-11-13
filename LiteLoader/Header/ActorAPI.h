#pragma once
#include "Global.h"

class Actor;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;

struct ActorObj : public Actor {
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    bool isSimulatedPlayer();
    bool isPlayer();
    std::string getEntityTypeName();
    bool ActorObj::hurtEntity(int damage);
    Vec2* getDirction();
};
