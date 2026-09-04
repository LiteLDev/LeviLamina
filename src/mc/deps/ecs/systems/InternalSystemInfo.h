#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/SystemInfo.h"
#include "mc/deps/profiler/PredeclaredAnnotation.h"

struct InternalSystemInfo : public ::SystemInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::PredeclaredAnnotation> mAnnotationForTick;
    // NOLINTEND
};
