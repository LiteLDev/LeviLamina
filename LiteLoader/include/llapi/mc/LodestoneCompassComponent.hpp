/**
 * @file  LodestoneCompassComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LodestoneCompassComponent.
 *
 */
class LodestoneCompassComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONECOMPASSCOMPONENT
public:
    class LodestoneCompassComponent& operator=(class LodestoneCompassComponent const &) = delete;
    LodestoneCompassComponent(class LodestoneCompassComponent const &) = delete;
    LodestoneCompassComponent() = delete;
#endif

public:
    /**
     * @hash   -241297391
     * @symbol  ??0LodestoneCompassComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent &&);
    /**
     * @hash   -1950029909
     * @symbol  ?getAnimationFrame\@LodestoneCompassComponent\@\@QEAAHAEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI int getAnimationFrame(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   1374563738
     * @symbol  ?initialize\@LodestoneCompassComponent\@\@QEAAXAEBVPositionTrackingId\@\@\@Z
     */
    MCAPI void initialize(class PositionTrackingId const &);
    /**
     * @hash   -218334196
     * @symbol  ??4LodestoneCompassComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LodestoneCompassComponent & operator=(class LodestoneCompassComponent &&);
    /**
     * @hash   -2100091141
     * @symbol  ?setTrackOnlyInSameDimension\@LodestoneCompassComponent\@\@QEAAXAEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void setTrackOnlyInSameDimension(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);
    /**
     * @hash   -752746312
     * @symbol  ??1LodestoneCompassComponent\@\@QEAA\@XZ
     */
    MCAPI ~LodestoneCompassComponent();
    /**
     * @hash   -982113198
     * @symbol  ?getSpinningAnimationFrame\@LodestoneCompassComponent\@\@SAHXZ
     */
    MCAPI static int getSpinningAnimationFrame();
    /**
     * @hash   576114525
     * @symbol  ?makeCalculatorId\@LodestoneCompassComponent\@\@SA?AV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI static class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> makeCalculatorId(struct ActorUniqueID const &);

//private:
    /**
     * @hash   736104927
     * @symbol  ?_findCalculator\@LodestoneCompassComponent\@\@AEAAPEAVLodestoneCompassComponentCalculator\@\@AEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI class LodestoneCompassComponentCalculator * _findCalculator(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);

private:
    /**
     * @hash   -943558948
     * @symbol  ?mSpinningLodestone\@LodestoneCompassComponent\@\@0VCompassSpriteCalculator\@\@A
     */
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;

};