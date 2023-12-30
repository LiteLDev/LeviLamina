#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class TSNTag {
public:
    // prevent constructor by default
    TSNTag& operator=(TSNTag const&);
    TSNTag(TSNTag const&);
    TSNTag();
};

}; // namespace dcsctp
