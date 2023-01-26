#include "llapi/Global.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/CommandUtils.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/HashedString.hpp"
#include "llapi/mc/HitDetection.hpp"
#include "llapi/mc/HitResult.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/LevelChunk.hpp"
#include "llapi/mc/Material.hpp"
#include "llapi/mc/Mob.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/ListTag.hpp"
#include "llapi/mc/StringTag.hpp"
#include "llapi/mc/SimpleContainer.hpp"
#include "llapi/mc/TeleportCommand.hpp"
#include "llapi/mc/TeleportTarget.hpp"
#include "llapi/mc/UserEntityIdentifierComponent.hpp"
#include "llapi/mc/OnFireSystem.hpp"
#include "llapi/mc/ClipDefaults.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/ActorDefinitionIdentifier.hpp"
#include "llapi/mc/ActorDamageSource.hpp"
#include "llapi/mc/Vec2.hpp"
#include "llapi/mc/AABB.hpp"
#include "llapi/mc/RotationCommandUtils.hpp"

class UserEntityIdentifierComponent;

UserEntityIdentifierComponent* Actor::getUserEntityIdentifierComponent() const {
    return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)((Actor*)this);
}

MCINLINE Vec3 Actor::getFeetPosition() const {
    return CommandUtils::getFeetPos(this);
}

BlockSource* Actor::getBlockSource() const {
    return Level::getBlockSource((Actor*)this);
}

bool Actor::isSimulatedPlayer() const {
    if (!this)
        return false;
    return *(void**)this == dlsym("??_7SimulatedPlayer@@6B@");
}

bool Actor::isPlayer(bool allowSimulatedPlayer) const {
    if (!this)
        return false;
    try {
        if (*(void**)this == dlsym("??_7ServerPlayer@@6B@"))
            return true;
        if (allowSimulatedPlayer && isSimulatedPlayer())
            return true;
        return false;
    } catch (...) { return false; }
}

bool Actor::isItemActor() const {
    return hasCategory((ActorCategory)1024); // IDA Player::take
}

bool Actor::isOnGround() const {
    return (dAccess<bool, 392>(this)); // IDA DirectActorProxyImpl<IMobMovementProxy>::isOnGround
}

std::string Actor::getTypeName() const {
    return getActorIdentifier().getCanonicalName();
}
 
bool Actor::hurtEntity(float damage, ActorDamageCause damageCause) {
    auto ads = new ActorDamageSource(damageCause);
    auto res = ((Mob*)this)->_hurt(*ads, damage, true, false);
    ads->~ActorDamageSource();
    delete ads;
    return res;
}


Vec2* Actor::getDirection() const {
    return (Vec2*)(this + 312); // IDA: Actor::getRotation()
}

BlockPos Actor::getBlockPos() {
    return getPosition().add(0, -1.0, 0).toBlockPos();
}

BlockInstance Actor::getBlockStandingOn() const {
    return Level::getBlockInstance(getBlockPosCurrentlyStandingOn(nullptr), getDimensionId());
}

ActorUniqueID Actor::getActorUniqueId() const {
    __try {
        return getUniqueID();
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return {0};
    }
}

static_assert(sizeof(RotationCommandUtils::RotationData) == 32);

bool Actor::teleport(Vec3 to, int dimID) {
    auto rot = getRotation();
    return teleport(to, dimID, rot.x, rot.y);
}

bool Actor::teleport(Vec3 to, int dimID, float x, float y) {
    if (!this->isAlive())
        return false;
    char mem[48];
    auto computeTarget =
        (TeleportTarget * (*)(void*, class Actor&, class Vec3, class Vec3*, class AutomaticID<class Dimension, int>,
                              std::optional<RotationCommandUtils::RotationData> const&,
                              int))(&TeleportCommand::computeTarget);
    auto rot = getRotation();
    // The rotation of the BDS internal teleport command is the relative rotation,
    // See RotationCommandUtils::ComputeRotation(),
    // CommandVersion should not be greater than 1, otherwise it will cause unnecessary trouble.
    auto target = computeTarget(mem, *this, to, nullptr, dimID, RotationCommandUtils::RotationData{x - rot.x, y - rot.y, {}}, 1);
    TeleportCommand::applyTarget(*this, *target, false);
    return true;
}

ItemStack* Actor::getHandSlot() {
    if (isPlayer())
        return (ItemStack*)&((Player*)this)->getSelectedItem();
    return (ItemStack*)&getHandContainer().getItem(0);
}

bool Actor::rename(const string& name) {
    setNameTag(name);
    return refreshActorData();
}

std::unique_ptr<CompoundTag> Actor::getNbt() {
    return CompoundTag::fromActor(this);
}

bool Actor::setNbt(CompoundTag* nbt) {
    return nbt->setActor(this);
}

bool Actor::refreshActorData() {
    _sendDirtyActorData();
    return true;
}

bool Actor::setOnFire(int num, bool isEffect) {
    if (isEffect)
        OnFireSystem::setOnFire(*this, num);
    else
        OnFireSystem::setOnFireNoEffects(*this, num);
    return true;
}

bool Actor::stopFire() {
    OnFireSystem::stopFire(*this);
    return true;
}


Vec3 Actor::getCameraPos() const {
    auto& pos = this->getPosition();
    if (isSneaking()) {
        pos.add(0, -0.125, 0);
    } else {
        pos.add(0, ((Player*)this)->getCameraOffset(), 0);
    }
    return pos;
}

Tick* Actor::getLastTick() const {
    auto bs = getBlockSource();
    if (!bs)
        return nullptr;
    auto bpos = getPosition().toBlockPos();
    LevelChunk* lc = bs->getChunkAt(bpos);
    if (!lc)
        return nullptr;
    return (Tick*)&lc->getLastTick();
}

BlockInstance Actor::getBlockFromViewVector(FaceID& face, bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) const {
    auto& bs = getRegion();
    auto pos = getCameraPos();
    auto viewVec = getViewVector(1.0f);
    auto viewPos = pos + (viewVec * maxDistance);
    auto player = isPlayer() ? (Player*)this : nullptr;
    int maxDisManhattan = (int)((maxDistance + 1) * 2);
    HitResult result = bs.clip(pos, viewPos, includeLiquid, solidOnly, maxDisManhattan, ignoreBorderBlocks, fullOnly, nullptr, ClipDefaults::CHECK_ALL_PICKABLE_BLOCKS);
    if (result.isHit() || (includeLiquid && result.isHitLiquid())) {
        BlockPos bpos{};
        if (includeLiquid && result.isHitLiquid()) {
            bpos = result.getLiquidPos();
            face = result.getLiquidFacing();
        } else {
            bpos = result.getBlockPos();
            face = result.getFacing();
        }
        // auto block = const_cast<Block*>(&bs.getBlock(bpos));
        return Level::getBlockInstance(bpos, bs.getDimensionId());
    }
    return BlockInstance::Null;
}

BlockInstance Actor::getBlockFromViewVector(bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) const {
    FaceID face = FaceID::Unknown;
    return getBlockFromViewVector(face, includeLiquid, solidOnly, maxDistance, ignoreBorderBlocks, fullOnly);
}

Actor* Actor::getActorFromViewVector(float maxDistance) {
    auto& bs = getRegion();
    auto pos = getCameraPos();
    auto viewVec = getViewVector(1.0f);
    auto aabb = *(AABB*)&getAABB();
    auto player = isPlayer() ? (Player*)this : nullptr;
    Actor* result = nullptr;
    float distance = 0.0f;
    Vec3 resultPos{};
    HitDetection::searchActors(viewVec, maxDistance, pos, aabb, this, (Player*)this, distance, result, resultPos, player);
    return result;
}

bool Actor::addEffect(MobEffect::EffectType type, int tick, int level, bool ambient, bool showParticles, bool showAnimation) {
    MobEffectInstance ins = MobEffectInstance((unsigned int)type, tick, level, ambient, showParticles, showAnimation);
    ins.applyEffects(this);
    return true;
};

std::vector<std::string> Actor::getAllTags() {
    try {
        auto nbt = getNbt();
        auto& list = ((ListTag*)nbt->getListTag("Tags"))->value();

        vector<string> res;
        for (auto& tag : list) {
            res.emplace_back(tag->asStringTag()->get());
        }
        return res;
    } catch (...) {
        return {};
    }
}

bool Actor::hasTag(const string& tag) {
    auto tags = getAllTags();
    return std::find(tags.begin(), tags.end(), tag) != tags.end();
}

Biome* Actor::getBiome() {
    auto bs = getBlockSource();
    return const_cast<Biome*>(&bs->getConstBiome(getPos().toBlockPos()));
}