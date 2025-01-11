#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class ChunkPos;
class DespawnDefinition;
class Player;
class Randomize;
class Vec3;
// clang-format on

class DespawnComponent {
public:
    // DespawnComponent inner types declare
    // clang-format off
    class IWorldAccessor;
    class WorldAccessor;
    // clang-format on

    // DespawnComponent inner types define
    class IWorldAccessor {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~IWorldAccessor();

        // vIndex: 1
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const = 0;

        // vIndex: 2
        virtual uint getChunkTickRange() const = 0;

        // vIndex: 3
        virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;

        // vIndex: 4
        virtual bool hasUntickedNeighborChunk(::ChunkPos const&, int) const = 0;

        // vIndex: 5
        virtual ::Randomize& getChanceRandomize() = 0;

        // vIndex: 6
        virtual ::std::optional<int> getActorNoActionTime(::Actor const&) const = 0;

        // vIndex: 7
        virtual void resetActorNoActionTime(::Actor&) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class WorldAccessor : public ::DespawnComponent::IWorldAccessor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkdd04ca;
        ::ll::UntypedStorage<8, 24> mUnke083cd;
        // NOLINTEND

    public:
        // prevent constructor by default
        WorldAccessor& operator=(WorldAccessor const&);
        WorldAccessor(WorldAccessor const&);
        WorldAccessor();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const /*override*/;

        // vIndex: 2
        virtual uint getChunkTickRange() const /*override*/;

        // vIndex: 3
        virtual bool areChunksFullyLoaded(::BlockPos const& min, int r) const /*override*/;

        // vIndex: 4
        virtual bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const /*override*/;

        // vIndex: 5
        virtual ::Randomize& getChanceRandomize() /*override*/;

        // vIndex: 6
        virtual ::std::optional<int> getActorNoActionTime(::Actor const& actor) const /*override*/;

        // vIndex: 7
        virtual void resetActorNoActionTime(::Actor& actor) /*override*/;

        // vIndex: 0
        virtual ~WorldAccessor() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::Player* $fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;

        MCAPI uint $getChunkTickRange() const;

        MCAPI bool $areChunksFullyLoaded(::BlockPos const& min, int r) const;

        MCAPI bool $hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const;

        MCAPI ::Randomize& $getChanceRandomize();

        MCAPI ::std::optional<int> $getActorNoActionTime(::Actor const& actor) const;

        MCAPI void $resetActorNoActionTime(::Actor& actor);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tryStandardDespawnRules(
        ::Actor&                            actor,
        ::DespawnDefinition const&          definition,
        ::DespawnComponent::IWorldAccessor& worldAccessor
    ) const;

    MCAPI ::DespawnDefinition const& getDefinition(::Actor& actor) const;

    MCAPI void onDespawn(::Actor& actor);

    MCAPI void tick(::Actor& actor);
    // NOLINTEND
};
