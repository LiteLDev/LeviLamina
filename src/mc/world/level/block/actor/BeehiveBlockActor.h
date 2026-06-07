#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class BeehiveBlockActor : public ::BlockActor {
public:
    // BeehiveBlockActor inner types declare
    // clang-format off
    struct Occupant;
    // clang-format on

    // BeehiveBlockActor inner types define
    struct Occupant {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 24, ::CompoundTag>                mSaveData;
        ::ll::TypedStorage<4, 4, uint>                          mTicksLeftToStay;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BeehiveBlockActor::Occupant>> mOccupants;
    ::ll::TypedStorage<1, 1, bool>                                          mShouldSpawnBees;
    // NOLINTEND

public:
    // prevent constructor by default
    BeehiveBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper&) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BeehiveBlockActor(::BlockPos const& pos);

    MCAPI ::Actor* _revive(::BlockSource& region, ::BeehiveBlockActor::Occupant const& occupant, uchar spawnDirection);

    MCAPI bool _tickOccupant(::BlockSource& region, ::BeehiveBlockActor::Occupant& occupant);

    MCAPI void _trySpawnBees(::BlockSource& region);

    MCAPI void disableBeeSpawn();

    MCAPI void evictAll(::BlockSource& region, bool angry);

    MCAPI void saveUserData(::CompoundTag& tag) const;

    MCAPI bool tryAdmit(::Actor& actor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<uchar> _findFreeDirections(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::optional<uchar> _findFreeExit(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& MAX_OCCUPANCY();

    MCAPI static ::BlockActorType const& TypeId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
