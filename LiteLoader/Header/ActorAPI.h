#pragma once
#include "Global.h"

class Actor;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;

struct ActorObj : public Actor {
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
};