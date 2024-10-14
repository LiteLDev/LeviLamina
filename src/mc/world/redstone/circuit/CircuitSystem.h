#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitSystem {
public:
    // prevent constructor by default
    CircuitSystem& operator=(CircuitSystem const&);
    CircuitSystem(CircuitSystem const&);

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
