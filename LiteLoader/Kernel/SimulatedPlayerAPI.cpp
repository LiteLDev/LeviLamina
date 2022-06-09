#include <Global.h>
#include <MC/SimulatedPlayer.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/Minecraft.hpp>
#include <MC/StackResultStorageEntity.hpp>
#include <MC/OwnerStorageEntity.hpp>
#include <MC/Level.hpp>

static_assert(sizeof(ScriptNavigationResult) == 32);

bool SimulatedPlayer::simulateDestory()
{
    FaceID face = FaceID::Unknown;
    auto blockIns = getBlockFromViewVector(face);
    if (blockIns.isNull())
        return false;
    return simulateDestroyBlock(blockIns.getPosition(), (ScriptFacing)face);
}

bool SimulatedPlayer::simulateUseItem()
{
    auto slot = getSelectedItemSlot();
    return simulateUseItemInSlot(slot);
}

template <>
class OwnerPtrT<struct EntityRefTraits>
{
    char filler[24];

public:
    MCAPI ~OwnerPtrT();

    inline OwnerPtrT(OwnerPtrT&& right) noexcept
    {
        void (OwnerPtrT::*rv)(OwnerPtrT && right);
        *((void**)&rv) = dlsym("??0OwnerStorageEntity@@IEAA@$$QEAV0@@Z");
        (this->*rv)(std::move(right));
    }
    inline OwnerPtrT& operator=(OwnerPtrT&& right) noexcept
    {
        void (OwnerPtrT::*rv)(OwnerPtrT && right);
        *((void**)&rv) = dlsym("??4OwnerStorageEntity@@IEAAAEAV0@$$QEAV0@@Z");
        (this->*rv)(std::move(right));
    }

    inline SimulatedPlayer* tryGetSimulatedPlayer(bool b = false)
    {
        auto& context = dAccess<StackResultStorageEntity, 0>(this).getStackRef();
        return SimulatedPlayer::tryGetFromEntity(context, b);
    }

    inline bool hasValue() const
    {
        if (!this)
            return false;
        return dAccess<bool, 16>(this);
    }
    // inline bool isValid()
};

class SimulatedPlayer* SimulatedPlayer::create(std::string const& name, class BlockPos const& position, class AutomaticID<class Dimension, int> dimensionId)
{
    // auto handler = Global<Minecraft>->getServerNetworkHandler();
    // return create(name, position, dimensionId, Global<Minecraft>->getServerNetworkHandler());
    OwnerPtrT<EntityRefTraits> ownerPtr = Global<ServerNetworkHandler>->createSimulatedPlayer(name, dimensionId);
    auto player = ownerPtr.tryGetSimulatedPlayer();

    if (player /* && player->isSimulatedPlayer() */)
    {
        player->postLoad(/* isNewPlayer */ true);
        Level& level = player->getLevel();
        level.addUser(std::move(ownerPtr));
        auto pos = position.bottomCenter();
        pos.y = pos.y + 1.62001f;
        player->setPos(pos);
        player->setRespawnReady(pos);
        player->setSpawnBlockRespawnPosition(position, dimensionId);
        player->setLocalPlayerAsInitialized();
        player->doInitialSpawn();
    }
    return player;
}


class SimulatedPlayer* SimulatedPlayer::create(std::string const& name, class AutomaticID<class Dimension, int> dimensionId)
{
    OwnerPtrT<EntityRefTraits> ownerPtr = Global<ServerNetworkHandler>->createSimulatedPlayer(name, dimensionId);
    auto player = ownerPtr.tryGetSimulatedPlayer();

    if (player /* && player->isSimulatedPlayer() */)
    {
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
