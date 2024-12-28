#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class Mob;
// clang-format on

class OpenDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk689b2a;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&);
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OpenDoorAnnotationComponent();

    MCAPI void _cleanUp(::Mob& mob);

    MCAPI void checkPath(::Mob& mob);

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void onComponentRemoved(::EntityContext& entity);

    MCAPI ::OpenDoorAnnotationComponent& operator=(::OpenDoorAnnotationComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
