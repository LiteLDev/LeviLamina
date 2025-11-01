#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details::AnnotationFlags::Flag::Composite {

enum class Value : uchar {
    RetailAndBelow = 1,
    DevAndBelow = 3,
    VerboseAndBelow = 7,
    TraceAndBelow = 15,
};

}
