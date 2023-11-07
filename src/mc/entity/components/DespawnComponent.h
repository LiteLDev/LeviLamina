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
        // vIndex: 0, symbol: ??1IWorldAccessor@DespawnComponent@@UEAA@XZ
        virtual ~IWorldAccessor();

        // vIndex: 1, symbol: ?fetchAnyInteractablePlayer@WorldAccessor@DespawnComponent@@UEBAPEAVPlayer@@AEBVVec3@@M@Z
        virtual class Player* fetchAnyInteractablePlayer(class Vec3 const&, float) const = 0;

        // vIndex: 2, symbol: ?getChunkTickRange@WorldAccessor@DespawnComponent@@UEBAIXZ
        virtual uint getChunkTickRange() const = 0;

        // vIndex: 3, symbol: ?areChunksFullyLoaded@WorldAccessor@DespawnComponent@@UEBA_NAEBVBlockPos@@H@Z
        virtual bool areChunksFullyLoaded(class BlockPos const&, int) const = 0;

        // vIndex: 4, symbol: ?hasUntickedNeighborChunk@WorldAccessor@DespawnComponent@@UEBA_NAEBVChunkPos@@H@Z
        virtual bool hasUntickedNeighborChunk(class ChunkPos const&, int) const = 0;

        // vIndex: 5, symbol: ?getChanceRandomize@WorldAccessor@DespawnComponent@@UEAAAEAVRandomize@@XZ
        virtual class Randomize& getChanceRandomize() = 0;

        // vIndex: 6, symbol:
        // ?getActorNoActionTime@WorldAccessor@DespawnComponent@@UEBA?AV?$optional@H@std@@AEBVActor@@@Z
        virtual std::optional<int> getActorNoActionTime(class Actor const&) const = 0;

        // vIndex: 7, symbol: ?resetActorNoActionTime@WorldAccessor@DespawnComponent@@UEAAXAEAVActor@@@Z
        virtual void resetActorNoActionTime(class Actor&) = 0;

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
        // vIndex: 0, symbol: ??1WorldAccessor@DespawnComponent@@UEAA@XZ
        virtual ~WorldAccessor();

        // vIndex: 1, symbol: ?fetchAnyInteractablePlayer@WorldAccessor@DespawnComponent@@UEBAPEAVPlayer@@AEBVVec3@@M@Z
        virtual class Player* fetchAnyInteractablePlayer(class Vec3 const&, float) const;

        // vIndex: 2, symbol: ?getChunkTickRange@WorldAccessor@DespawnComponent@@UEBAIXZ
        virtual uint getChunkTickRange() const;

        // vIndex: 3, symbol: ?areChunksFullyLoaded@WorldAccessor@DespawnComponent@@UEBA_NAEBVBlockPos@@H@Z
        virtual bool areChunksFullyLoaded(class BlockPos const&, int) const;

        // vIndex: 4, symbol: ?hasUntickedNeighborChunk@WorldAccessor@DespawnComponent@@UEBA_NAEBVChunkPos@@H@Z
        virtual bool hasUntickedNeighborChunk(class ChunkPos const&, int) const;

        // vIndex: 5, symbol: ?getChanceRandomize@WorldAccessor@DespawnComponent@@UEAAAEAVRandomize@@XZ
        virtual class Randomize& getChanceRandomize();

        // vIndex: 6, symbol:
        // ?getActorNoActionTime@WorldAccessor@DespawnComponent@@UEBA?AV?$optional@H@std@@AEBVActor@@@Z
        virtual std::optional<int> getActorNoActionTime(class Actor const&) const;

        // vIndex: 7, symbol: ?resetActorNoActionTime@WorldAccessor@DespawnComponent@@UEAAXAEAVActor@@@Z
        virtual void resetActorNoActionTime(class Actor&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DespawnComponent& operator=(DespawnComponent const&);
    DespawnComponent(DespawnComponent const&);
    DespawnComponent();

public:
    // NOLINTBEGIN
    // symbol: ?onDespawn@DespawnComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onDespawn(class Actor&);

    // symbol: ?tick@DespawnComponent@@QEAAXAEAVActor@@@Z
    MCAPI void tick(class Actor&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryStandardDespawnRules@DespawnComponent@@AEBA_NAEAVActor@@AEBVDespawnDefinition@@AEAVIWorldAccessor@1@@Z
    MCAPI bool
    _tryStandardDespawnRules(class Actor&, class DespawnDefinition const&, class DespawnComponent::IWorldAccessor&)
        const;

    // symbol: ?getDefinition@DespawnComponent@@AEBAAEBVDespawnDefinition@@AEAVActor@@@Z
    MCAPI class DespawnDefinition const& getDefinition(class Actor&) const;

    // NOLINTEND
};
