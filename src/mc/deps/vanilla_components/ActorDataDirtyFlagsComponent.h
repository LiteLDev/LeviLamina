#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDataDirtyFlagsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8117d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDataDirtyFlagsComponent& operator=(ActorDataDirtyFlagsComponent const&);
    ActorDataDirtyFlagsComponent(ActorDataDirtyFlagsComponent const&);
    ActorDataDirtyFlagsComponent();
};
