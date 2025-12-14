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
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void executeEvent(
        ::BlockSource& region,
        ::BlockPos const&,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             actor
    ) /*override*/;

    virtual ~CreakingHeartBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void despawnSpawnedCreaking(::Level& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $executeEvent(
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
