#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class EndGatewayBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    EndGatewayBlockActor& operator=(EndGatewayBlockActor const&);
    EndGatewayBlockActor(EndGatewayBlockActor const&);
    EndGatewayBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndGatewayBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 16
    virtual void triggerEvent(int b0, int b1);

    // vIndex: 20
    virtual bool hasAlphaLayer() const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCAPI explicit EndGatewayBlockActor(class BlockPos const& pos);

    MCAPI class BlockPos getExitPosition() const;

    MCAPI void setExitPosition(class BlockPos const& exitPosition);

    MCAPI void teleportEntity(class Actor& entity);

    MCAPI static class BlockPos findExitPortal(class WorldGenerator& endGenerator, class BlockPos const& origin);

    MCAPI static class BlockPos
    findTallestBlock(class BlockSource& region, class BlockPos const& around, int dist, bool allowBedrock);

    MCAPI static class BlockPos findValidSpawnAround(
        class BlockSource&    region,
        class BlockPos const& around,
        bool                  searchForEndStoneOnly,
        int                   searchRadius
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int
    _getHighestSection(class WorldGenerator& endGenerator, class BlockVolume& box, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource& region);

    MCAPI bool hasAlphaLayer$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void tick$(class BlockSource& region);

    MCAPI void triggerEvent$(int b0, int b1);

    MCAPI static int const& COOLDOWN_TIME();

    MCAPI static int const& EVENT_COOLDOWN();

    MCAPI static int const& SPAWN_TIME();

    // NOLINTEND
};
