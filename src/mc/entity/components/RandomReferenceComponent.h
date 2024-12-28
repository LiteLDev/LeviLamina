#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RandomReferenceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkcd04d0;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomReferenceComponent& operator=(RandomReferenceComponent const&);
    RandomReferenceComponent(RandomReferenceComponent const&);
    RandomReferenceComponent();
};
