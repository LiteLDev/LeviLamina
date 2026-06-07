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
    // prevent constructor by default
    CreakingHeartBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::ILevel& tag, ::CompoundTag const& dataLoadHelper, ::DataLoadHelper&) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const /*override*/;

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CreakingHeartBlockActor(::BlockPos const& pos);

    MCAPI void despawnSpawnedCreaking(::Level& level);

    MCAPI void executeEvent(
        ::BlockSource& region,
        ::BlockPos const&,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             actor
    );

    MCAPI int getComparatorSignal(::Level& level) const;

    MCAPI void onSpawnedCreakingDamaged(::BlockSource& region, ::Actor& creaking);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& tag, ::CompoundTag const& dataLoadHelper, ::DataLoadHelper&);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCFOLD bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
