#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TransformationComponent {

public:
    // prevent constructor by default
    TransformationComponent& operator=(TransformationComponent const&) = delete;
    TransformationComponent(TransformationComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TransformationComponent\@\@QEAA\@XZ
     */
    MCAPI TransformationComponent();
    /**
     * @symbol ?getDelayTicks\@TransformationComponent\@\@QEBAHXZ
     */
    MCAPI int getDelayTicks() const;
    /**
     * @symbol ?initFromDefinition\@TransformationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol
     * ?maintainOldData\@TransformationComponent\@\@QEAAXAEAVActor\@\@0AEBUTransformationDescription\@\@AEBUActorUniqueID\@\@AEBVLevel\@\@\@Z
     */
    MCAPI void
    maintainOldData(class Actor&, class Actor&, struct TransformationDescription const&, struct ActorUniqueID const&, class Level const&);
    /**
     * @symbol ?reloadComponent\@TransformationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&);
    /**
     * @symbol ?setDelayTicks\@TransformationComponent\@\@QEAAXH\@Z
     */
    MCAPI void setDelayTicks(int);
    /**
     * @symbol ?transformIfAble\@TransformationComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void transformIfAble(class Actor&, bool);
    // NOLINTEND
};
