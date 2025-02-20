#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkf62500;
    ::ll::UntypedStorage<4, 8> mUnkc71aec;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRotationComponent& operator=(ActorRotationComponent const&);
    ActorRotationComponent(ActorRotationComponent const&);
    ActorRotationComponent();
};
