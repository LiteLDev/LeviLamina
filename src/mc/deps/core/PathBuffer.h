#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
class PathBuffer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_PATHBUFFER
public:
    PathBuffer& operator=(PathBuffer const&) = delete;
    PathBuffer(PathBuffer const&)            = delete;
    PathBuffer()                             = delete;
#endif

public:
};

}; // namespace Core
