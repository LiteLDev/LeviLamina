/**
 * @file  MC/LodestoneCompassComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -970196671
     * @symbol ??0LodestoneCompassComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent &&);
    /**
     * @hash   1494198683
     * @symbol ?getAnimationFrame@LodestoneCompassComponent@@QEAAHAEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@AEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI int getAnimationFrame(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   523825034
     * @symbol ?initialize@LodestoneCompassComponent@@QEAAXAEBVPositionTrackingId@@@Z
     */
    MCAPI void initialize(class PositionTrackingId const &);
    /**
     * @hash   -947171972
     * @symbol ??4LodestoneCompassComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class LodestoneCompassComponent & operator=(class LodestoneCompassComponent &&);
    /**
     * @hash   1344137451
     * @symbol ?setTrackOnlyInSameDimension@LodestoneCompassComponent@@QEAAXAEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@_N@Z
     */
    MCAPI void setTrackOnlyInSameDimension(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);
    /**
     * @hash   -1481584088
     * @symbol ??1LodestoneCompassComponent@@QEAA@XZ
     */
    MCAPI ~LodestoneCompassComponent();
    /**
     * @hash   -1832851902
     * @symbol ?getSpinningAnimationFrame@LodestoneCompassComponent@@SAHXZ
     */
    MCAPI static int getSpinningAnimationFrame();
    /**
     * @hash   -274624179
     * @symbol ?makeCalculatorId@LodestoneCompassComponent@@SA?AV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@AEBUActorUniqueID@@@Z
     */
    MCAPI static class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> makeCalculatorId(struct ActorUniqueID const &);

//private:
    /**
     * @hash   -114679905
     * @symbol ?_findCalculator@LodestoneCompassComponent@@AEAAPEAVLodestoneCompassComponentCalculator@@AEBV?$variant@UActorUniqueID@@U?$pair@VBlockPos@@V?$AutomaticID@VDimension@@H@@@std@@@std@@_N@Z
     */
    MCAPI class LodestoneCompassComponentCalculator * _findCalculator(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);

private:
    /**
     * @hash   -1761177748
     * @symbol ?mSpinningLodestone@LodestoneCompassComponent@@0VCompassSpriteCalculator@@A
     */
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;

};