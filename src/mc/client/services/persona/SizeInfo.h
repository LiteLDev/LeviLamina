#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct SizeInfo {

public:
    // prevent constructor by default
    SizeInfo& operator=(SizeInfo const&) = delete;
    SizeInfo(SizeInfo const&)            = delete;
    SizeInfo()                           = delete;
};

}; // namespace persona
