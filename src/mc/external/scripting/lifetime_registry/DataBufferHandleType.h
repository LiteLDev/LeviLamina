#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct DataBufferHandleType {
public:
    // prevent constructor by default
    DataBufferHandleType& operator=(DataBufferHandleType const&);
    DataBufferHandleType(DataBufferHandleType const&);
    DataBufferHandleType();
};

} // namespace Scripting
