#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class BeehiveBlockActor : public ::BlockActor {
public:
    // BeehiveBlockActor inner types declare
    // clang-format off
    struct Occupant;
    // clang-format on

    // BeehiveBlockActor inner types define
    struct Occupant {
    public:
        // prevent constructor by default
        Occupant& operator=(Occupant const&);
        Occupant(Occupant const&);
        Occupant();

    public:
        // NOLINTBEGIN
        MCAPI
        Occupant(struct ActorDefinitionIdentifier actorIdentifier, class CompoundTag saveData, uint ticksLeftToStay);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void*
        ctor$(struct ActorDefinitionIdentifier actorIdentifier, class CompoundTag saveData, uint ticksLeftToStay);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BeehiveBlockActor& operator=(BeehiveBlockActor const&);
    BeehiveBlockActor(BeehiveBlockActor const&);
    BeehiveBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeehiveBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    MCAPI void disableBeeSpawn();

    MCAPI void evictAll(class BlockSource& region, bool angry);

    MCAPI void saveUserData(class CompoundTag& tag) const;

    MCAPI bool tryAdmit(class Actor& actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Actor*
    _revive(class BlockSource& region, struct BeehiveBlockActor::Occupant const& occupant, uchar spawnDirection);

    MCAPI bool _tickOccupant(class BlockSource& region, struct BeehiveBlockActor::Occupant& occupant);

    MCAPI void _trySpawnBees(class BlockSource& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void tick$(class BlockSource& region);

    MCAPI static uint const& MAX_OCCUPANCY();

    // NOLINTEND
};
