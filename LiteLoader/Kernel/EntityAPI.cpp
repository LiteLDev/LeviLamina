#include <MCApi/Actor.hpp>
#include <Global.h>
#include <EntityAPI.h>
class UserEntityIdentifierComponent;

LIAPI UserEntityIdentifierComponent* ActorObj::getUserEntityIdentifierComponent() {
    return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)(_this);
}