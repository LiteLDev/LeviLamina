#include <Global.h>
#include <MC/Actor.hpp>
#include <MC/ActorDamageSource.hpp>
#include <MC/Block.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/BlockSource.hpp>
#include <MC/CommandUtils.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/HashedString.hpp>
#include <MC/HitDetection.hpp>
#include <MC/HitResult.hpp>
#include <MC/Level.hpp>
#include <MC/LevelChunk.hpp>
#include <MC/Material.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/ListTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/SimpleContainer.hpp>
#include <MC/TeleportCommand.hpp>
#include <MC/TeleportTarget.hpp>
#include <MC/UserEntityIdentifierComponent.hpp>
#include <MC/OnFireSystem.hpp>

class UserEntityIdentifierComponent;

UserEntityIdentifierComponent* Actor::getUserEntityIdentifierComponent() const {
    return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)((Actor*)this);
}

MCINLINE Vec3 Actor::getPosition() const {
    return CommandUtils::getFeetPos(this);
}

BlockSource* Actor::getBlockSource() const {
    return Level::getBlockSource((Actor*)this);
}

bool Actor::isSimulatedPlayer() const {
    if (!this)
        return false;
    static const auto vtbl = dlsym("??_7SimulatedPlayer@@6B@");
    return *(void**)this == vtbl;
}

bool Actor::isPlayer() const {
    if (!this)
        return false;
    try
    {
        static const auto vtbl = dlsym("??_7ServerPlayer@@6B@");
        return *(void**)this == vtbl || isSimulatedPlayer();
    }
    catch (...) { return false; }
}

bool Actor::isItemActor() const {
    return hasCategory((ActorCategory)1024); // IDA Player::take
}

bool Actor::isOnGround() const {
    return (dAccess<bool, 472>(this)); // IDA DirectActorProxyImpl<IMobMovementProxy>::isOnGround
}
#include <MC/ActorDefinitionIdentifier.hpp>
std::string Actor::getTypeName() const {
    /*string res = SymCall("?EntityTypeToString@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorType@@W4ActorTypeNamespaceRules@@@Z",
        string, int, int) (Raw_GetEntityTypeId(actor), 1);*/
    if (isPlayer())
        return "minecraft:player";
    else {
        return getActorIdentifier().getCanonicalName();
        //HashedString hash = dAccess<HashedString>(this, 880); //IDA Actor::Actor
        //return hash.getString();
    }
}

bool Actor::hurtEntity(int damage) {
    char a[16];
    ActorDamageSource& ad = SymCall("??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z",
                                    ActorDamageSource&, ActorDamageSource*, ActorDamageCause)((ActorDamageSource*)a, ActorDamageCause::None);
    return ((Mob*)this)->_hurt(ad, damage, true, false);
}

Vec2* Actor::getDirection() const {
    return (Vec2*)(this + 312); // IDA: Actor::getRotation()
}

BlockPos Actor::getBlockPos() {
    return getPos().add(0,-1.0,0).toBlockPos();
}

BlockInstance Actor::getBlockStandingOn() const
{
    return Level::getBlockInstance(getBlockPosCurrentlyStandingOn(nullptr), getDimensionId());
}


ActorUniqueID Actor::getActorUniqueId() const {
    __try {
        return getUniqueID();
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return {0};
    }
}
#include <MC/TeleportRotationData.hpp>
bool Actor::teleport(Vec3 to, int dimID)
{
    char mem[48];
    auto computeTarget = (TeleportTarget * (*)(void*, class Actor&, class Vec3, class Vec3*, class AutomaticID<class Dimension, int>, std::optional<TeleportRotationData> const&, int))(&TeleportCommand::computeTarget);   
    auto rotdata = TeleportRotationData(getRotation().x, getRotation().y, {});
    auto target = computeTarget(mem, *this, to, nullptr, dimID, {}, 15);
    TeleportCommand::applyTarget(*this, *target);
    return true;
}

#include <MC/ItemStack.hpp>
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

bool Actor::setOnFire(int num,bool isEffect) {
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
    Vec3 pos = *(Vec3*)&getStateVector();
    if (isSneaking()) {
        pos.y += -0.125;
    } else {
        pos.y += ((Player*)this)->getCameraOffset();
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
    auto&& pos = getCameraPos();
    auto viewVec = getViewVector(1.0f);
    auto viewPos = pos + (viewVec * maxDistance);
    auto player = isPlayer() ? (Player*)this : nullptr;
    int maxDisManhattan = (int)((maxDistance + 1) * 2);
    HitResult result = bs.clip(pos, viewPos, includeLiquid, solidOnly, maxDisManhattan, ignoreBorderBlocks, fullOnly, nullptr);
    if (result.isHit() || (includeLiquid && result.isHitLiquid())) {
        BlockPos bpos{};
        if (includeLiquid && result.isHitLiquid()) {
            bpos = result.getLiquidPos();
            face = result.getLiquidFacing();
        } else {
            bpos = result.getBlockPos();
            face = result.getFacing();
        }
        //auto block = const_cast<Block*>(&bs.getBlock(bpos));
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
    auto aabb = *(AABB*)&_getAABBShapeNonConst();
    auto player = isPlayer() ? (Player*)this : nullptr;
    Actor* result = nullptr;
    float distance = 0.0f;
    Vec3 resultPos{};
    HitDetection::searchActors(viewVec, maxDistance, pos, aabb, this, (Player*)this, distance, result, resultPos, player);
    return result;
}

bool Actor::addEffect(MobEffect::EffectType type, int tick, int level, bool ambient, bool showParticles, bool showAnimation)
{
    MobEffectInstance ins = MobEffectInstance((unsigned int)type, tick, level, ambient, showParticles, showAnimation);
    ins.applyEffects(this);
    return true;
};

std::vector<std::string> Actor::getAllTags()
{
    try
    {
        auto nbt = getNbt();
        auto& list = ((ListTag*)nbt->getListTag("Tags"))->value();

        vector<string> res;
        for (auto& tag : list)
        {
            res.emplace_back(tag->asStringTag()->get());
        }
        return res;
    }
    catch (...)
    {
        return {};
    }
}

bool Actor::hasTag(const string& tag)
{
    auto tags = getAllTags();
    return std::find(tags.begin(), tags.end(), tag) != tags.end();
}
