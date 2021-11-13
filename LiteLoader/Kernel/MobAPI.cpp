#include "MobAPI.h"
#include <MCApi/Mob.hpp>
#include <Global.h>
#include <ActorAPI.h>
#include <MCApi/ActorDefinitionIdentifier.hpp>
class UserEntityIdentifierComponent;

LIAPI UserEntityIdentifierComponent* MobObj::getUserEntityIdentifierComponent() {
    return ((ActorObj*)(Actor*)this)->getUserEntityIdentifierComponent();
}

