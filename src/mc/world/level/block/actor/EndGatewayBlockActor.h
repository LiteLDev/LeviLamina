#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
class SaveContext;
class WorldGenerator;
// clang-format on

class EndGatewayBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mAge;
    ::ll::TypedStorage<4, 4, int>         mTeleportCooldown;
    ::ll::TypedStorage<4, 12, ::BlockPos> mExitPortal;
    ::ll::TypedStorage<1, 1, bool>        mNeedsExitGeneration;
    ::ll::TypedStorage<1, 1, bool>        mTeleportTriggered;
    ::ll::TypedStorage<1, 1, bool>        mNeedsExitPositionVerification;
    ::ll::TypedStorage<1, 1, bool>        mExitPositionVerified;
    ::ll::TypedStorage<1, 1, bool>        mEndGatewayBadPosResetRequired;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 16
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~EndGatewayBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EndGatewayBlockActor(::BlockPos const& pos);

    MCAPI ::BlockPos getExitPosition() const;

    MCAPI void setExitPosition(::BlockPos const& exitPosition);

    MCAPI void teleportEntity(::Actor& entity);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockPos findExitPortal(::WorldGenerator& endGenerator, ::BlockPos const& origin);

    MCAPI static ::BlockPos
    findTallestBlock(::BlockSource& region, ::BlockPos const& around, int dist, bool allowBedrock);

    MCAPI static ::BlockPos
    findValidSpawnAround(::BlockSource& region, ::BlockPos const& around, bool searchForEndStoneOnly, int searchRadius);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& COOLDOWN_TIME();

    MCAPI static int const& EVENT_COOLDOWN();

    MCAPI static int const& SPAWN_TIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource& region);

    MCFOLD bool $hasAlphaLayer() const;

    MCAPI void $triggerEvent(int b0, int b1);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
