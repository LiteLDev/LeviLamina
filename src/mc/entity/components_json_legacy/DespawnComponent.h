#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // prevent constructor by default
        IWorldAccessor& operator=(IWorldAccessor const&);
        IWorldAccessor(IWorldAccessor const&);
        IWorldAccessor();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~IWorldAccessor();

        // vIndex: 1
        virtual class Player* fetchAnyInteractablePlayer(class Vec3 const& searchPos, float maxDist) const = 0;

        // vIndex: 2
        virtual uint getChunkTickRange() const = 0;

        // vIndex: 3
        virtual bool areChunksFullyLoaded(class BlockPos const& min, int r) const = 0;

        // vIndex: 4
        virtual bool hasUntickedNeighborChunk(class ChunkPos const& pos, int chunkRadius) const = 0;

        // vIndex: 5
        virtual class Randomize& getChanceRandomize() = 0;

        // vIndex: 6
        virtual std::optional<int> getActorNoActionTime(class Actor const& actor) const = 0;

        // vIndex: 7
        virtual void resetActorNoActionTime(class Actor& actor) = 0;

        // NOLINTEND
    };

    class WorldAccessor : public ::DespawnComponent::IWorldAccessor {
    public:
        // prevent constructor by default
        WorldAccessor& operator=(WorldAccessor const&);
        WorldAccessor(WorldAccessor const&);
        WorldAccessor();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~WorldAccessor();

        // vIndex: 1
        virtual class Player* fetchAnyInteractablePlayer(class Vec3 const& searchPos, float maxDist) const;

        // vIndex: 2
        virtual uint getChunkTickRange() const;

        // vIndex: 3
        virtual bool areChunksFullyLoaded(class BlockPos const& min, int r) const;

        // vIndex: 4
        virtual bool hasUntickedNeighborChunk(class ChunkPos const& pos, int chunkRadius) const;

        // vIndex: 5
        virtual class Randomize& getChanceRandomize();

        // vIndex: 6
        virtual std::optional<int> getActorNoActionTime(class Actor const& actor) const;

        // vIndex: 7
        virtual void resetActorNoActionTime(class Actor& actor);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DespawnComponent& operator=(DespawnComponent const&);
    DespawnComponent(DespawnComponent const&);
    DespawnComponent();

public:
    // NOLINTBEGIN
    MCAPI void onDespawn(class Actor& actor);

    MCAPI void tick(class Actor& actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryStandardDespawnRules(
        class Actor&                            actor,
        class DespawnDefinition const&          definition,
        class DespawnComponent::IWorldAccessor& worldAccessor
    ) const;

    MCAPI class DespawnDefinition const& getDefinition(class Actor& actor) const;

    // NOLINTEND
};
