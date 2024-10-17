#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OpenDoorAnnotationComponent {
public:
    // prevent constructor by default
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&);
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent const&);

public:
    // NOLINTBEGIN
    MCAPI OpenDoorAnnotationComponent();

    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent&&);

    MCAPI void checkPath(class Mob& mob);

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI void onComponentRemoved(class EntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _cleanUp(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class OpenDoorAnnotationComponent&&);

    // NOLINTEND
};
