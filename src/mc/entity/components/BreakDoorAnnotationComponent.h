#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationComponent {
public:
    // prevent constructor by default
    BreakDoorAnnotationComponent& operator=(BreakDoorAnnotationComponent const&);
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BreakDoorAnnotationComponent();

    MCAPI bool canMobBreakDoor(class Mob& mob, class Path const& path) const;

    MCAPI void clearProgress(class Mob& mob);

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI void obstructionCheck(class Mob& mob);

    MCAPI void onComponentRemoved(class EntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _cleanUp(class Mob& mob);

    MCAPI bool _shouldBreakDoor(class Mob& mob);

    // NOLINTEND
};
