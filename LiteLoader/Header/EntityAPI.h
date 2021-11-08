#pragma once
#include <Global.h>
class Actor;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;
struct ActorObj : Wrapped<Actor> {
    ActorObj(Actor& x)
        : Wrapped<Actor>(x) {
    }
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
};