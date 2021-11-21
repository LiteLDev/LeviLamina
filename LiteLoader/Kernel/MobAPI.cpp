//#include "MobAPI.h"
#include <Global.h>
#include <MC/Mob.hpp>
#include <MC/Actor.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
#include <MC/PathNavigation.hpp>
UserEntityIdentifierComponent* Mob::getUserEntityIdentifierComponent() {
    return ((Actor*)this)->getUserEntityIdentifierComponent();
}

