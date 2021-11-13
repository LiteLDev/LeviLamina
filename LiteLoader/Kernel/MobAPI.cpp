#include "MobAPI.h"
#include <MCApi/Mob.hpp>
#include <Global.h>
#include <ActorAPI.h>
class UserEntityIdentifierComponent;

LIAPI UserEntityIdentifierComponent* MobObj::getUserEntityIdentifierComponent() {
    return ((ActorObj*)(Actor*)this)->getUserEntityIdentifierComponent();
}
