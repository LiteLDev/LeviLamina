#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class BeehiveBlockActor : public ::VanillaBlockActor {
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
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* _revive(::BlockSource& region, ::BeehiveBlockActor::Occupant const& occupant, uchar spawnDirection);

    MCNAPI bool _tickOccupant(::BlockSource& region, ::BeehiveBlockActor::Occupant& occupant);

    MCAPI void evictAll(::BlockSource& region, bool angry);

    MCNAPI void saveUserData(::CompoundTag& tag) const;

    MCNAPI bool tryAdmit(::Actor& actor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
    // NOLINTEND
};
