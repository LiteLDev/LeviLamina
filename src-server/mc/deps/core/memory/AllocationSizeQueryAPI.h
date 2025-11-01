#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

enum class AllocationSizeQueryAPI : uchar {
    Invalid = 0,
    MicrosoftMsize = 1,
    LinuxMallocUsableSize = 2,
    AppleMallocSize = 3,
};

}
