#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
class PathBuffer {
public:
    // prevent constructor by default
    PathBuffer& operator=(PathBuffer const&);
    PathBuffer(PathBuffer const&);
    PathBuffer();
};

}; // namespace Core
