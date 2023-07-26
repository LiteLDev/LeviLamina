#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

template <typename T0>
class LoadResult {

public:
    // prevent constructor by default
    LoadResult& operator=(LoadResult const&) = delete;
    LoadResult(LoadResult const&)            = delete;
    LoadResult()                             = delete;
};

}; // namespace Puv
