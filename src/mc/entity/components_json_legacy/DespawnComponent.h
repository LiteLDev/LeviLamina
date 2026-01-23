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
        virtual ~IWorldAccessor();

        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const = 0;

        virtual uint getChunkTickRange() const = 0;

        virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;

        virtual bool hasUntickedNeighborChunk(::ChunkPos const&, int) const = 0;

        virtual ::Randomize& getChanceRandomize() = 0;

        virtual ::std::optional<int> getActorNoActionTime(::Actor const&) const = 0;

        virtual void resetActorNoActionTime(::Actor&) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
        virtual ::Player* fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const /*override*/;

        virtual uint getChunkTickRange() const /*override*/;

        virtual bool areChunksFullyLoaded(::BlockPos const& min, int r) const /*override*/;

        virtual bool hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const /*override*/;

        virtual ::Randomize& getChanceRandomize() /*override*/;

        virtual ::std::optional<int> getActorNoActionTime(::Actor const& actor) const /*override*/;

        virtual void resetActorNoActionTime(::Actor& actor) /*override*/;

        virtual ~WorldAccessor() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Player* $fetchAnyInteractablePlayer(::Vec3 const& searchPos, float maxDist) const;

        MCNAPI uint $getChunkTickRange() const;

        MCNAPI bool $areChunksFullyLoaded(::BlockPos const& min, int r) const;

        MCNAPI bool $hasUntickedNeighborChunk(::ChunkPos const& pos, int chunkRadius) const;

        MCNAPI ::Randomize& $getChanceRandomize();

        MCNAPI ::std::optional<int> $getActorNoActionTime(::Actor const& actor) const;

        MCNAPI void $resetActorNoActionTime(::Actor& actor);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _softRulesPrescribeDespawn(
        ::Actor&                            actor,
        ::DespawnDefinition const&          definition,
        ::DespawnComponent::IWorldAccessor& worldAccessor
    ) const;

    MCNAPI bool _tryStandardDespawnRules(
        ::Actor&                            actor,
        ::DespawnDefinition const&          definition,
        ::DespawnComponent::IWorldAccessor& worldAccessor
    ) const;

    MCNAPI void tick(::Actor& actor);
    // NOLINTEND
};
