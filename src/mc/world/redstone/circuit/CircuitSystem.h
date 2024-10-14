#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/FacingID.h"
#include "mc/world/redstone/circuit/CircuitSceneGraph.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

class CircuitSystem {
public:
    class LevelChunkTracking {
    public:
        BlockPos mChunkPos;
    };
    bool                                           mLockGraph;
    CircuitSceneGraph                              mSceneGraph;
    std::vector<CircuitSystem::LevelChunkTracking> mAddedLevelChunk;
    bool                                           mHasBeenEvaluated;

    template <typename Component>
    Component* create(
        class BlockPos const& pos,
        class BlockSource* /*pSource*/,
        ::CircuitComponentType type,
        ::FacingID             direction
    ) {
        if (mLockGraph) {
            if (!mSceneGraph.getComponent(pos, type)) return (Component*)mSceneGraph.getFromPendingAdd(pos, type);
        }
        auto* pComponent = createComponent(pos, (uchar)direction, std::unique_ptr<BaseCircuitComponent>());

        if (pComponent) {
            pComponent->mChunkPosition.x = pos.x >> 4;
            pComponent->mChunkPosition.z = pos.z >> 4;
        }
        return (Component*)pComponent;
    }

public:
    // NOLINTBEGIN
    MCAPI CircuitSystem();

    MCAPI void evaluate(class BlockSource* region);

    MCAPI int getStrength(class BlockPos const& pos);

    MCAPI void invalidatePos(class BlockPos const& pos);

    MCAPI bool isAvailableAt(class BlockPos const& pos);

    MCAPI bool isConnectionAllowed(
        class BaseCircuitComponent& component,
        class BlockPos const&       componentPos,
        uchar                       connectionDirection,
        bool                        directilyPowered
    );

    MCAPI void preSetupPoweredBlocks(class ChunkPos const& chunkPos);

    MCAPI void removeComponents(class BlockPos const& pos);

    MCAPI void setStrength(class BlockPos const& pos, int strength);

    MCAPI void updateBlocks(class BlockSource& region, class BlockPos const& chunkPos);

    MCAPI void updateDependencies(class BlockSource* region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class BaseCircuitComponent* createComponent(
        class BlockPos const&                       pos,
        uchar                                       direction,
        std::unique_ptr<class BaseCircuitComponent> newComponent
    );

    MCAPI void evaluateComponents(bool bOnlyProducers);

    MCAPI void updateIndividualBlock(
        gsl::not_null<class BaseCircuitComponent*> component,
        class BlockPos const&                      chunkPos,
        class BlockPos const&                      pos,
        class BlockSource&                         region
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
