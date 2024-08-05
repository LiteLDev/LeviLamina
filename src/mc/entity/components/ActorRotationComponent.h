#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRotationComponent {
public:
    // prevent constructor by default
    ActorRotationComponent(ActorRotationComponent const&);
    ActorRotationComponent();

public:
    // NOLINTBEGIN
    MCAPI struct ActorRotationComponent& operator=(struct ActorRotationComponent const&);

    // NOLINTEND
};
