#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TransformationComponent {

public:
    // prevent constructor by default
    TransformationComponent& operator=(TransformationComponent const&) = delete;
    TransformationComponent(TransformationComponent const&)            = delete;

public:
    /**
     * @symbol ??0TransformationComponent\@\@QEAA\@XZ
     */
    MCAPI TransformationComponent(); // NOLINT
    /**
     * @symbol ?getDelayTicks\@TransformationComponent\@\@QEBAHXZ
     */
    MCAPI int getDelayTicks() const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@TransformationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol
     * ?maintainOldData\@TransformationComponent\@\@QEAAXAEAVActor\@\@0AEBUTransformationDescription\@\@AEBUActorUniqueID\@\@AEBVLevel\@\@\@Z
     */
    MCAPI void
    maintainOldData(class Actor&, class Actor&, struct TransformationDescription const&, struct ActorUniqueID const&, class Level const&); // NOLINT
    /**
     * @symbol ?reloadComponent\@TransformationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&); // NOLINT
    /**
     * @symbol ?setDelayTicks\@TransformationComponent\@\@QEAAXH\@Z
     */
    MCAPI void setDelayTicks(int); // NOLINT
    /**
     * @symbol ?transformIfAble\@TransformationComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void transformIfAble(class Actor&, bool); // NOLINT
};
