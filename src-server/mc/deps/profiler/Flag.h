#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details::AnnotationFlags::Flag {
// inner types
enum : uchar {
    // bitfield representation
    None = 0,
    Retail = 1 << 0,
    Dev = 1 << 1,
    Verbose = 1 << 2,
    Trace = 1 << 3,
    Reserved4 = 1 << 4,
    Reserved5 = 1 << 5,
    Reserved6 = 1 << 6,
    Baseline = 1 << 7,
};

}
