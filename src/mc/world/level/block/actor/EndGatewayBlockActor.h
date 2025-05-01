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

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 21
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 17
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~EndGatewayBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void teleportEntity(::Actor& entity);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _getHighestSection(::WorldGenerator& endGenerator, ::BlockVolume& box, ::BlockPos const& pos);

    MCNAPI static ::BlockPos findExitPortal(::WorldGenerator& endGenerator, ::BlockPos const& origin);

    MCNAPI static ::BlockPos
    findValidSpawnAround(::BlockSource& region, ::BlockPos const& around, bool searchForEndStoneOnly, int searchRadius);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI void $triggerEvent(int b0, int b1);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
