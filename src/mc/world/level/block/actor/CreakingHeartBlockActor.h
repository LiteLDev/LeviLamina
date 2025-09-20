#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Level;
class SaveContext;
// clang-format on

class CreakingHeartBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mCooldown;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mSpawnedCreakingID;
    ::ll::TypedStorage<4, 4, uint>            mTrailResidualDuration;
    ::ll::TypedStorage<4, 4, uint>            mElapsedCooldownsWithBlockedPlayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 3
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 17
    virtual void executeEvent(
        ::BlockSource& region,
        ::BlockPos const&,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             actor
    ) /*override*/;

    // vIndex: 0
    virtual ~CreakingHeartBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void despawnSpawnedCreaking(::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $executeEvent(
        ::BlockSource& region,
        ::BlockPos const&,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             actor
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
