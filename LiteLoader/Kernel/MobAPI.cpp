//#include "MobAPI.h"
#include <Global.h>
#include <MC/Mob.hpp>
#include <MC/Actor.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>

UserEntityIdentifierComponent* Mob::getUserEntityIdentifierComponent() {
    return ((Actor*)this)->getUserEntityIdentifierComponent();
}

