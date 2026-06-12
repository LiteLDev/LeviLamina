#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

struct MoodyCamelBedrockMemoryTraits : public ::moodycamel::ConcurrentQueueDefaultTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void free(void* ptr);

    MCAPI static void* malloc(uint64 size);
    // NOLINTEND
};

} // namespace Bedrock::Memory
