#include <MC/Actor.hpp>
#include <Global.h>
#include <MC/Actor.hpp>
#include <MC/HashedString.hpp>
#include <MC/Mob.hpp>
#include <MC/ActorDamageSource.hpp>
#include <MC/UserEntityIdentifierComponent.hpp>
class UserEntityIdentifierComponent;

LIAPI UserEntityIdentifierComponent* Actor::getUserEntityIdentifierComponent() {
    return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)(this);
}

LIAPI bool Actor::isSimulatedPlayer() {
    if (!this)
        return false;
    auto vtbl = dlsym("??_7SimulatedPlayer@@6B@");
    return *(void**)this == vtbl;
}

LIAPI bool Actor::isPlayer() {
    if (!this)
        return false;
    auto vtbl = dlsym("??_7ServerPlayer@@6B@");
    return *(void**)this == vtbl || isSimulatedPlayer();
}

LIAPI std::string Actor::getEntityTypeName() {
    /*string res = SymCall("?EntityTypeToString@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorType@@W4ActorTypeNamespaceRules@@@Z",
        string, int, int) (Raw_GetEntityTypeId(actor), 1);*/
    if (isPlayer())
        return "minecraft:player";
    else {
        HashedString* hash = dAccess<HashedString*>(this, 888); //IDA Actor::Actor
        return hash->getString();
    }
}

LIAPI bool Actor::hurtEntity(int damage) {
    char a[16];
    ActorDamageSource& ad = SymCall("??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z",
                                           ActorDamageSource&, ActorDamageSource*, int)((ActorDamageSource*)a, 12); //ActorDamageCause::Void
    return ((Mob*)this)->_hurt(ad, damage, true, false);
}

LIAPI Vec2* Actor::getDirction() {
    return (Vec2*)(this + 312); // IDA: Actor::getRotation()
}



