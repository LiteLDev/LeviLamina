#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockSource;
class BlockVolume;
class CompoundTag;
class DataLoadHelper;
class ILevel;
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
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 16
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 42
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~EndGatewayBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void teleportEntity(::Actor& entity);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int _getHighestSection(::WorldGenerator& endGenerator, ::BlockVolume& box, ::BlockPos const& pos);

    MCAPI static bool _isSafeToTeleport(::BlockSource const& region, ::BlockPos const& pos);

    MCAPI static ::BlockPos findExitPortal(::WorldGenerator& endGenerator, ::BlockPos const& origin);

    MCAPI static ::BlockPos
    findValidSpawnAround(::BlockSource& region, ::BlockPos const& around, bool searchForEndStoneOnly, int searchRadius);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
