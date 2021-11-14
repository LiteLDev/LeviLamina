#pragma once
#include "Global.h"

class Actor;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;

struct ActorObj : public Actor {
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    LIAPI bool isSimulatedPlayer();
    LIAPI bool isPlayer();
    LIAPI std::string getEntityTypeName();
    LIAPI bool hurtEntity(int damage);
    LIAPI Vec2* getDirction();
};
