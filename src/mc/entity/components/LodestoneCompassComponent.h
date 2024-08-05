#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class LodestoneCompassComponent {
public:
    // prevent constructor by default
    LodestoneCompassComponent& operator=(LodestoneCompassComponent const&);
    LodestoneCompassComponent(LodestoneCompassComponent const&);
    LodestoneCompassComponent();

public:
    // NOLINTBEGIN
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent&&);

    MCAPI int
    getAnimationFrame(std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& compassId, class BlockPos const&, DimensionType const&);

    MCAPI void initialize(class PositionTrackingId const&);

    MCAPI class LodestoneCompassComponent& operator=(class LodestoneCompassComponent&&);

    MCAPI void setTrackOnlyInSameDimension(
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& compassId,
        bool
    );

    MCAPI ~LodestoneCompassComponent();

    MCAPI static int getSpinningAnimationFrame();

    MCAPI static std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>>
    makeCalculatorId(struct ActorUniqueID const& id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class LodestoneCompassComponentCalculator* _findCalculator(
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& compassId,
        bool                                                                                createIfNotFound
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;

    // NOLINTEND
};
