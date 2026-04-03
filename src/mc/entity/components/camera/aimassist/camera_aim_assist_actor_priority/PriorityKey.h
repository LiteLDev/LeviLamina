#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistActorPriority {

struct PriorityKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk88f902;
    ::ll::UntypedStorage<4, 4> mUnk521e36;
    ::ll::UntypedStorage<4, 4> mUnk276274;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityKey& operator=(PriorityKey const&);
    PriorityKey(PriorityKey const&);
    PriorityKey();
};

} // namespace CameraAimAssistActorPriority
