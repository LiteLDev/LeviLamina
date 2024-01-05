#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TransformationComponent {
public:
    // prevent constructor by default
    TransformationComponent& operator=(TransformationComponent const&);
    TransformationComponent(TransformationComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TransformationComponent@@QEAA@XZ
    MCAPI TransformationComponent();

    // symbol: ?getDelayTicks@TransformationComponent@@QEBAHXZ
    MCAPI int getDelayTicks() const;

    // symbol: ?initFromDefinition@TransformationComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // symbol:
    // ?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@AEBVLevel@@@Z
    MCAPI void maintainOldData(
        class Actor&                            originalActor,
        class Actor&                            transformed,
        struct TransformationDescription const& transformation,
        struct ActorUniqueID const&             ownerID,
        class Level const&                      level
    );

    // symbol: ?reloadComponent@TransformationComponent@@QEAAXAEAVActor@@@Z
    MCAPI void reloadComponent(class Actor& actor);

    // symbol: ?setDelayTicks@TransformationComponent@@QEAAXH@Z
    MCAPI void setDelayTicks(int delayTicks);

    // symbol: ?transformIfAble@TransformationComponent@@QEAAXAEAVActor@@_N@Z
    MCAPI void transformIfAble(class Actor& actor, bool);

    // NOLINTEND
};
