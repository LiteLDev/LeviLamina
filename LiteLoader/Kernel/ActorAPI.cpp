#include <MCApi/Actor.hpp>
#include <Global.h>
#include <ActorAPI.h>
class UserEntityIdentifierComponent;

LIAPI UserEntityIdentifierComponent* ActorObj::getUserEntityIdentifierComponent() {
    return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)(this);
}
