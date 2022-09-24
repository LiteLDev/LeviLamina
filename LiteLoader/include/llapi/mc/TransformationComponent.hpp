/**
 * @file  TransformationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TransformationComponent.
 *
 */
class TransformationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMATIONCOMPONENT
public:
    class TransformationComponent& operator=(class TransformationComponent const &) = delete;
    TransformationComponent(class TransformationComponent const &) = delete;
#endif

public:
    /**
     * @hash   1802155008
     * @symbol ??0TransformationComponent@@QEAA@XZ
     */
    MCAPI TransformationComponent();
    /**
     * @hash   -2014752534
     * @symbol ?getDelayTicks@TransformationComponent@@QEBAHXZ
     */
    MCAPI int getDelayTicks() const;
    /**
     * @hash   1987472466
     * @symbol ?initFromDefinition@TransformationComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   236836732
     * @symbol ?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@AEBVLevel@@@Z
     */
    MCAPI void maintainOldData(class Actor &, class Actor &, struct TransformationDescription const &, struct ActorUniqueID const &, class Level const &);
    /**
     * @hash   1016072114
     * @symbol ?reloadComponent@TransformationComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void reloadComponent(class Actor &);
    /**
     * @hash   1839926076
     * @symbol ?setDelayTicks@TransformationComponent@@QEAAXH@Z
     */
    MCAPI void setDelayTicks(int);
    /**
     * @hash   -111284963
     * @symbol ?transformIfAble@TransformationComponent@@QEAAXAEAVActor@@_N@Z
     */
    MCAPI void transformIfAble(class Actor &, bool);

};