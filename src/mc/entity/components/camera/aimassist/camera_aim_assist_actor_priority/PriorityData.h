#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistActorPriority {

struct PriorityData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7846fb;
    ::ll::UntypedStorage<4, 4> mUnkf1f181;
    ::ll::UntypedStorage<4, 4> mUnkbd1492;
    ::ll::UntypedStorage<4, 4> mUnk2937c2;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityData& operator=(PriorityData const&);
    PriorityData(PriorityData const&);
    PriorityData();
};

} // namespace CameraAimAssistActorPriority
