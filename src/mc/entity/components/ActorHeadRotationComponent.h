#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHeadRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk749002;
    ::ll::UntypedStorage<4, 4> mUnk29c6a1;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHeadRotationComponent& operator=(ActorHeadRotationComponent const&);
    ActorHeadRotationComponent(ActorHeadRotationComponent const&);
    ActorHeadRotationComponent();
};
