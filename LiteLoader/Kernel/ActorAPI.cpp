#include <MC/Actor.hpp>
#include <Global.h>
#include <MC/Actor.hpp>
#include <MC/HashedString.hpp>
#include <MC/Mob.hpp>
#include <MC/ActorDamageSource.hpp>
#include <MC/UserEntityIdentifierComponent.hpp>
#include <MC/TeleportCommand.hpp>
#include <MC/TeleportTarget.hpp>
#include <MC/Level.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Biome.hpp>
class UserEntityIdentifierComponent;

UserEntityIdentifierComponent* Actor::getUserEntityIdentifierComponent() {
    return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)(this);
}

bool Actor::isSimulatedPlayer() {
    if (!this)
        return false;
    auto vtbl = dlsym("??_7SimulatedPlayer@@6B@");
    return *(void**)this == vtbl;
}

bool Actor::isPlayer() {
    if (!this)
        return false;
    auto vtbl = dlsym("??_7ServerPlayer@@6B@");
    return *(void**)this == vtbl || isSimulatedPlayer();
}

std::string Actor::getEntityTypeName() {
    /*string res = SymCall("?EntityTypeToString@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorType@@W4ActorTypeNamespaceRules@@@Z",
        string, int, int) (Raw_GetEntityTypeId(actor), 1);*/
    if (isPlayer())
        return "minecraft:player";
    else {
        HashedString* hash = dAccess<HashedString*>(this, 888); //IDA Actor::Actor
        return hash->getString();
    }
}

bool Actor::hurtEntity(int damage) {
    char a[16];
    ActorDamageSource& ad = SymCall("??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z",
                                    ActorDamageSource&, ActorDamageSource*, ActorDamageCause)((ActorDamageSource*)a, ActorDamageCause::Void); //ActorDamageCause::Void
    return ((Mob*)this)->_hurt(ad, damage, true, false);
}

Vec2* Actor::getDirction() {
    return (Vec2*)(this + 312); // IDA: Actor::getRotation()
}

void Actor::teleport(Vec3 vec3,int a1) {
    TeleportCommand::applyTarget(*this, TeleportCommand::computeTarget(*this, Vec3{vec3.x, vec3.y, vec3.z}, 0, a1, 0, 0, 15));
}
