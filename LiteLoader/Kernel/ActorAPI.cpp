#include <MCApi/Actor.hpp>
#include <Global.h>
#include <ActorAPI.h>
#include <MCApi/HashedString.hpp>
#include <MCApi/Mob.hpp>
#include <MCApi/ActorDamageSource.hpp>
#include <MCApi/UserEntityIdentifierComponent.hpp>
class UserEntityIdentifierComponent;

LIAPI UserEntityIdentifierComponent* ActorObj::getUserEntityIdentifierComponent() {
    return UserEntityIdentifierComponent::tryGetFromEntity(*(EntityContext*)this);
    //return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)(this);
}

LIAPI bool ActorObj::isSimulatedPlayer() {
    if (!this)
        return false;
    auto vtbl = dlsym("??_7SimulatedPlayer@@6B@");
    return *(void**)this == vtbl;
}

LIAPI bool ActorObj::isPlayer() {
    if (!this)
        return false;
    auto vtbl = dlsym("??_7ServerPlayer@@6B@");
    return *(void**)this == vtbl || isSimulatedPlayer();
}


LIAPI std::string ActorObj::getEntityTypeName() {
    /*string res = SymCall("?EntityTypeToString@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorType@@W4ActorTypeNamespaceRules@@@Z",
        string, int, int) (Raw_GetEntityTypeId(actor), 1);*/
    if (isPlayer())
        return "minecraft:player";
    else {
        HashedString* hash = dAccess<HashedString*>(this, 888); //IDA Actor::Actor
        return hash->getString();
    }
}

LIAPI bool ActorObj::hurtEntity(int damage) {
    char a[16];
    ActorDamageSource& ad = SymCall("??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z",
                                           ActorDamageSource&, ActorDamageSource*, int)((ActorDamageSource*)a, 12); //ActorDamageCause::Void
    return ((Mob*)this)->_hurt(ad, damage, true, false);
}

LIAPI Vec2* ActorObj::getDirction() {
    return (Vec2*)(this + 312); // IDA: Actor::getRotation()
}



