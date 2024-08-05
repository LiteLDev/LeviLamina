#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TransformationComponent {
public:
    // prevent constructor by default
    TransformationComponent& operator=(TransformationComponent const&);
    TransformationComponent(TransformationComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TransformationComponent();

    MCAPI int getDelayTicks() const;

    MCAPI void initFromDefinition(class Actor& actor);

    MCAPI void maintainOldData(
        class Actor&                            originalActor,
        class Actor&                            transformed,
        struct TransformationDescription const& transformation,
        struct ActorUniqueID const&             ownerID,
        class Level const&                      level
    );

    MCAPI void reloadComponent(class Actor& actor);

    MCAPI void setDelayTicks(int delayTicks);

    MCAPI void transformIfAble(class Actor& actor, bool);

    // NOLINTEND
};
