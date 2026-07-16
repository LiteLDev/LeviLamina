#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct MipLevelDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar const*> data;
    ::ll::TypedStorage<4, 4, uint>         size;
    // NOLINTEND
};

} // namespace texd
