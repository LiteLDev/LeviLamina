#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

struct MoodyCamelBedrockMemoryTraits : public ::moodycamel::ConcurrentQueueDefaultTraits {};

} // namespace Bedrock::Memory
