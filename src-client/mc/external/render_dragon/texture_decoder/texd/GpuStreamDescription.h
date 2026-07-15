#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct GpuStreamDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         width;
    ::ll::TypedStorage<4, 4, uint>         height;
    ::ll::TypedStorage<8, 8, uchar const*> pixelData;
    ::ll::TypedStorage<4, 4, uint>         pixelDatasize;
    // NOLINTEND
};

} // namespace texd
