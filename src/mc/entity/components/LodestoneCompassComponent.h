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
    // symbol: ??0LodestoneCompassComponent@@QEAA@$$QEAV0@@Z
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent&&);

    // symbol:
    // ?getAnimationFrame@LodestoneCompassComponent@@QEAAHAEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@AEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI int
    getAnimationFrame(std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& compassId, class BlockPos const&, DimensionType const&);

    // symbol: ?initialize@LodestoneCompassComponent@@QEAAXAEBVPositionTrackingId@@@Z
    MCAPI void initialize(class PositionTrackingId const&);

    // symbol: ??4LodestoneCompassComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LodestoneCompassComponent& operator=(class LodestoneCompassComponent&&);

    // symbol:
    // ?setTrackOnlyInSameDimension@LodestoneCompassComponent@@QEAAXAEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@_N@Z
    MCAPI void setTrackOnlyInSameDimension(
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& compassId,
        bool
    );

    // symbol: ??1LodestoneCompassComponent@@QEAA@XZ
    MCAPI ~LodestoneCompassComponent();

    // symbol: ?getSpinningAnimationFrame@LodestoneCompassComponent@@SAHXZ
    MCAPI static int getSpinningAnimationFrame();

    // symbol:
    // ?makeCalculatorId@LodestoneCompassComponent@@SA?AV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@AEBUActorUniqueID@@@Z
    MCAPI static std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>>
    makeCalculatorId(struct ActorUniqueID const& id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findCalculator@LodestoneCompassComponent@@AEAAPEAVLodestoneCompassComponentCalculator@@AEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@_N@Z
    MCAPI class LodestoneCompassComponentCalculator* _findCalculator(
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, DimensionType>> const& compassId,
        bool                                                                                createIfNotFound
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mSpinningLodestone@LodestoneCompassComponent@@0VCompassSpriteCalculator@@A
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;

    // NOLINTEND
};
