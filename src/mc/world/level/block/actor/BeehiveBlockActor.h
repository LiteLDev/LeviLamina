#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
struct ActorDefinitionIdentifier;
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Occupant(::ActorDefinitionIdentifier actorIdentifier, ::CompoundTag saveData, uint ticksLeftToStay);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ActorDefinitionIdentifier actorIdentifier, ::CompoundTag saveData, uint ticksLeftToStay);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BeehiveBlockActor::Occupant>> mOccupants;
    ::ll::TypedStorage<1, 1, bool>                                          mShouldSpawnBees;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ~BeehiveBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* _revive(::BlockSource& region, ::BeehiveBlockActor::Occupant const& occupant, uchar spawnDirection);

    MCAPI bool _tickOccupant(::BlockSource& region, ::BeehiveBlockActor::Occupant& occupant);

    MCAPI void _trySpawnBees(::BlockSource& region);

    MCAPI void evictAll(::BlockSource& region, bool angry);

    MCAPI void saveUserData(::CompoundTag& tag) const;

    MCAPI bool tryAdmit(::Actor& actor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static uint const& MAX_OCCUPANCY();
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

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
