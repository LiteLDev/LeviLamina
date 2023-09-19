#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct SizeInfo {
public:
    // prevent constructor by default
    SizeInfo& operator=(SizeInfo const&);
    SizeInfo(SizeInfo const&);
    SizeInfo();
};

}; // namespace persona
