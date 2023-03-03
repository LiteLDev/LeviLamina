#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Minecraft.hpp"
#include "llapi/mc/OwnerStorageEntity.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/SimulatedPlayer.hpp"
#include "llapi/mc/StackResultStorageEntity.hpp"
#include "llapi/utils/RNG.h"

#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

// static_assert(sizeof(ScriptNavigationResult) == 32);

// For compatibility
bool SimulatedPlayer::simulateDestory() { return SimulatedPlayer::simulateDestroy(); }

bool SimulatedPlayer::simulateDestroy() {
    FaceID face     = FaceID::Unknown;
    auto   blockIns = getBlockFromViewVector(face);
    if (blockIns.isNull())
        return false;
    return simulateDestroyBlock(blockIns.getPosition(), (ScriptModuleMinecraft::ScriptFacing)face);
}

bool SimulatedPlayer::simulateUseItem() {
    auto slot = getSelectedItemSlot();
    return simulateUseItemInSlot(slot);
}

bool SimulatedPlayer::simulateSneak() {
    setSneaking(true);
    return isSneaking();
}

bool SimulatedPlayer::simulateStopSneaking() {
    setSneaking(false);
    return !isSneaking();
}

template <>
class OwnerPtrT<struct EntityRefTraits> {
    char filler[24];

public:
    MCAPI ~OwnerPtrT();

    inline OwnerPtrT(OwnerPtrT&& right) noexcept {
        void (OwnerPtrT::*rv)(OwnerPtrT && right);
        *((void**)&rv) = LL_RESOLVE_SYMBOL("??0OwnerStorageEntity@@IEAA@$$QEAV0@@Z");
        (this->*rv)(std::move(right));
    }
    inline OwnerPtrT& operator=(OwnerPtrT&& right) noexcept {
        void (OwnerPtrT::*rv)(OwnerPtrT && right);
        *((void**)&rv) = LL_RESOLVE_SYMBOL("??4OwnerStorageEntity@@IEAAAEAV0@$$QEAV0@@Z");
        (this->*rv)(std::move(right));
    }

    inline SimulatedPlayer* tryGetSimulatedPlayer(bool b = false) {
        auto& context = dAccess<StackResultStorageEntity, 0>(this).getStackRef();
        return SimulatedPlayer::tryGetFromEntity(context, b);
    }

    inline bool hasValue() const {
        if (!this)
            return false;
        return dAccess<bool, 16>(this);
    }
    // inline bool isValid()
};

#include "llapi/mc/HashedString.hpp"

class SimulatedPlayer* SimulatedPlayer::create(
    std::string const&                      name,
    class Vec3 const&                       pos,
    class AutomaticID<class Dimension, int> dimensionId
) {
    // auto handler = Global<Minecraft>->getServerNetworkHandler();
    // return create(name, position, dimensionId, Global<Minecraft>->getServerNetworkHandler());
    OwnerPtrT<EntityRefTraits> ownerPtr = Global<ServerNetworkHandler>->createSimulatedPlayer(
        name, '-' + std::to_string(HashedString::computeHash(name) ^ RNG::rand<uint64_t>()).substr(3)
    );
    auto player = ownerPtr.tryGetSimulatedPlayer();

    if (player /* && player->isSimulatedPlayer() */) {
        // player->changeDimension(dimensionId);
        player->postLoad(/* isNewPlayer */ true);
        Level& level = player->getLevel();
        level.addUser(std::move(ownerPtr));
        // Vec3 headPos = pos;
        // headPos.y += 1.62001f;
        // player->setPos(headPos);
        player->setRespawnReady(Vec3(0, 32768, 0));
        player->setRespawnPosition(pos.toBlockPos(), dimensionId);
        player->setLocalPlayerAsInitialized();
        player->doInitialSpawn();
        player->teleport(pos, dimensionId);
    }
    return player;
}

class SimulatedPlayer* SimulatedPlayer::create(
    std::string const&                      name,
    class BlockPos const&                   position,
    class AutomaticID<class Dimension, int> dimensionId
) {
    return create(name, position.bottomCenter(), dimensionId);
}

class SimulatedPlayer*
SimulatedPlayer::create(std::string const& name, class AutomaticID<class Dimension, int> dimensionId) {
    OwnerPtrT<EntityRefTraits> ownerPtr = Global<ServerNetworkHandler>->createSimulatedPlayer(
        name, '-' + std::to_string(HashedString::computeHash(name) ^ RNG::rand<uint64_t>()).substr(3)
    );
    auto player = ownerPtr.tryGetSimulatedPlayer();

    if (player /* && player->isSimulatedPlayer() */) {
        // player->changeDimension(dimensionId);
        player->postLoad(/* isNewPlayer */ true);
        Level& level = player->getLevel();
        level.addUser(std::move(ownerPtr));
        // auto pos = bpos.bottomCenter();
        // pos.y = pos.y + 1.62001;
        // player->setPos(pos);
        // player->setRespawnReady(pos);
        // player->setSpawnBlockRespawnPosition(bpos, dimId);
        player->setLocalPlayerAsInitialized();
        player->doInitialSpawn();
    }
    return player;
}
