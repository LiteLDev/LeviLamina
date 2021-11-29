#include <MC/Actor.hpp>
#include <Global.h>
#include <MC/Actor.hpp>
#include <MC/HashedString.hpp>
#include <MC/Mob.hpp>
#include <MC/ActorDamageSource.hpp>
#include <MC/UserEntityIdentifierComponent.hpp>
#include <MC/TeleportCommand.hpp>
#include <MC/TeleportTarget.hpp>
#include <MC/TeleportCommand.hpp>
#include <MC/TeleportTarget.hpp>
#include <MC/HitResult.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Block.hpp>
#include <MC/Level.hpp>
#include <MC/Material.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/TeleportCommand.hpp>
#include <MC/TeleportTarget.hpp>
#include <MC/Player.hpp>
#include <MC/HitDetection.hpp>
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

LIAPI std::string Actor::getTypeName() {
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
                                    ActorDamageSource&, ActorDamageSource*, ActorDamageCause)((ActorDamageSource*)a, ActorDamageCause::Void); //ActorDamageCause::Void
    return ((Mob*)this)->_hurt(ad, damage, true, false);
}

LIAPI Vec2* Actor::getDirction() {
    return (Vec2*)(this + 312); // IDA: Actor::getRotation()
}

LIAPI void Actor::teleport(Vec3 to, int dimid) {
    char mem[48];
    auto computeTarget = (TeleportTarget * (*)(void*, class Actor&, class Vec3, class Vec3*, class AutomaticID<class Dimension, int>, class RelativeFloat, class RelativeFloat, int))(&TeleportCommand::computeTarget);
    auto target = computeTarget(mem, *this, to, 0, dimid, 0, 0, 15);
    TeleportCommand::applyTarget(*this, *target);
}

LIAPI Vec3 Actor::getCameraPos() {
    Vec3 pos = *(Vec3*)&getStateVectorComponent();
    if (isSneaking()) {
        pos.y += -0.125;
    } else {
        pos.y += ((Player*)this)->getCameraOffset();
    }
    return pos;
}

LIAPI BlockInstance Actor::getBlockFromViewVector(FaceID& face, bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) {
    auto& bs = getRegion();
    auto& pos = getCameraPos();
    auto viewVec = getViewVector(1.0f);
    auto viewPos = pos + (viewVec * maxDistance);
    auto player = isPlayer() ? (Player*)this : nullptr;
    int maxDisManhattan = (int)((maxDistance + 1) * 2);
    HitResult result = bs.clip(pos, viewPos, includeLiquid, solidOnly, maxDisManhattan, ignoreBorderBlocks, fullOnly, nullptr);
    if (result.isHit() || (includeLiquid && result.isHitLiquid())) {
        BlockPos bpos;
        if (includeLiquid && result.isHitLiquid()) {
            bpos = result.getLiquidPos();
            face = result.getLiquidFacing();
        } else {
            bpos = result.getBlockPos();
            face = result.getFacing();
        }
        auto block = const_cast<Block*>(&bs.getBlock(bpos));
        return BlockInstance(block, bpos, bs.getDimensionId());
    }
    return BlockInstance::Null;
}

LIAPI BlockInstance Actor::getBlockFromViewVector(bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) {
    FaceID face = FaceID::Unknown;
    return getBlockFromViewVector(face, includeLiquid, solidOnly, maxDistance, ignoreBorderBlocks, fullOnly);
}

LIAPI Actor* Actor::getActorFromViewVector(float maxDistance) {
    auto& bs = getRegion();
    auto pos = getCameraPos();
    auto viewVec = getViewVector(1.0f);
    auto aabb = *(AABB*)&_getAABBShapeComponentNonConst();
    auto player = isPlayer() ? (Player*)this : nullptr;
    Actor* result = nullptr;
    float distance = 0.0f;
    Vec3 resultPos;
    HitDetection::searchActors(viewVec, maxDistance, pos, aabb, this, (Player*)this, distance, result, resultPos, player);
    return result;
}