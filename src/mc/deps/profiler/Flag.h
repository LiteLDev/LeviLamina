#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details::AnnotationFlags::Flag {
// inner types
enum : uchar {
    // bitfield representation
    None       = 0,
    RetailLite = 1 << 0,
    RetailPlus = 1 << 1,
    Dev        = 1 << 2,
    Verbose    = 1 << 3,
    Trace      = 1 << 4,
    Reserved5  = 1 << 5,
    Legacy     = 1 << 6,
    Baseline   = 1 << 7,
};

} // namespace Bedrock::Profiler::details::AnnotationFlags::Flag
