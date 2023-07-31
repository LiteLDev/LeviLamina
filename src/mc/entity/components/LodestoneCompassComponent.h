#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class LodestoneCompassComponent {

public:
    // prevent constructor by default
    LodestoneCompassComponent& operator=(LodestoneCompassComponent const&) = delete;
    LodestoneCompassComponent(LodestoneCompassComponent const&)            = delete;
    LodestoneCompassComponent()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0LodestoneCompassComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent&&);
    /**
     * @symbol
     * ?getAnimationFrame\@LodestoneCompassComponent\@\@QEAAHAEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI int
    getAnimationFrame(std::variant<struct ActorUniqueID, std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&, class BlockPos const&, class AutomaticID<class Dimension, int> const&);
    /**
     * @symbol ?getSpinningAnimationFrame\@LodestoneCompassComponent\@\@SAHXZ
     */
    MCAPI static int getSpinningAnimationFrame();
    /**
     * @symbol ?initialize\@LodestoneCompassComponent\@\@QEAAXAEBVPositionTrackingId\@\@\@Z
     */
    MCAPI void initialize(class PositionTrackingId const&);
    /**
     * @symbol
     * ?makeCalculatorId\@LodestoneCompassComponent\@\@SA?AV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI static std::variant<struct ActorUniqueID, std::pair<class BlockPos, class AutomaticID<class Dimension, int>>>
    makeCalculatorId(struct ActorUniqueID const&);
    /**
     * @symbol ??4LodestoneCompassComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LodestoneCompassComponent& operator=(class LodestoneCompassComponent&&);
    /**
     * @symbol
     * ?setTrackOnlyInSameDimension\@LodestoneCompassComponent\@\@QEAAXAEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void setTrackOnlyInSameDimension(
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&,
        bool
    );
    /**
     * @symbol ??1LodestoneCompassComponent\@\@QEAA\@XZ
     */
    MCAPI ~LodestoneCompassComponent();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_findCalculator\@LodestoneCompassComponent\@\@AEAAPEAVLodestoneCompassComponentCalculator\@\@AEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI class LodestoneCompassComponentCalculator* _findCalculator(
        std::variant<struct ActorUniqueID, std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&,
        bool
    );
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mSpinningLodestone\@LodestoneCompassComponent\@\@0VCompassSpriteCalculator\@\@A
     */
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;
    // NOLINTEND
};
