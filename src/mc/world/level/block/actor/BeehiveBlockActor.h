#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
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
        ::ll::UntypedStorage<8, 176> mUnkda7ec5;
        ::ll::UntypedStorage<8, 24>  mUnk5c198a;
        ::ll::UntypedStorage<4, 4>   mUnk53aa96;
        // NOLINTEND

    public:
        // prevent constructor by default
        Occupant& operator=(Occupant const&);
        Occupant(Occupant const&);
        Occupant();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9c2f70;
    ::ll::UntypedStorage<1, 1>  mUnkcf4990;
    // NOLINTEND

public:
    // prevent constructor by default
    BeehiveBlockActor& operator=(BeehiveBlockActor const&);
    BeehiveBlockActor(BeehiveBlockActor const&);
    BeehiveBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 0
    virtual ~BeehiveBlockActor() /*override*/;
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
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& MAX_OCCUPANCY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
