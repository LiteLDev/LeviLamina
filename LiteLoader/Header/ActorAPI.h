#pragma once
#include "Global.h"
#include "MCApi/Actor.hpp"
class Actor;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;

struct ActorObj : public Actor
{
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
};