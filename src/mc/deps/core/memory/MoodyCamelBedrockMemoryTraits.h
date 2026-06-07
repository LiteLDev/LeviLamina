#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

struct MoodyCamelBedrockMemoryTraits : public ::moodycamel::ConcurrentQueueDefaultTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void free(void* ptr);

    MCNAPI static void* malloc(uint64 size);
    // NOLINTEND
};

} // namespace Bedrock::Memory
