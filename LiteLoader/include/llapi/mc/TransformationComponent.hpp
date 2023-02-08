/**
 * @file  TransformationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   951139536
     * @symbol  ??0TransformationComponent\@\@QEAA\@XZ
     */
    MCAPI TransformationComponent();
    /**
     * @hash   -1763739334
     * @symbol  ?getDelayTicks\@TransformationComponent\@\@QEBAHXZ
     */
    MCAPI int getDelayTicks() const;
    /**
     * @hash   1136272482
     * @symbol  ?initFromDefinition\@TransformationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -614363252
     * @symbol  ?maintainOldData\@TransformationComponent\@\@QEAAXAEAVActor\@\@0AEBUTransformationDescription\@\@AEBUActorUniqueID\@\@AEBVLevel\@\@\@Z
     */
    MCAPI void maintainOldData(class Actor &, class Actor &, struct TransformationDescription const &, struct ActorUniqueID const &, class Level const &);
    /**
     * @hash   164841378
     * @symbol  ?reloadComponent\@TransformationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor &);
    /**
     * @hash   988756844
     * @symbol  ?setDelayTicks\@TransformationComponent\@\@QEAAXH\@Z
     */
    MCAPI void setDelayTicks(int);
    /**
     * @hash   -962500323
     * @symbol  ?transformIfAble\@TransformationComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void transformIfAble(class Actor &, bool);

};