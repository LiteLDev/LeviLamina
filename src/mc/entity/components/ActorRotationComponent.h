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
    ActorRotationComponent(ActorRotationComponent const&);
    ActorRotationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ActorRotationComponent& operator=(::ActorRotationComponent const&);
    // NOLINTEND
};
