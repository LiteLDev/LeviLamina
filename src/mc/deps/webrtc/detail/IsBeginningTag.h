#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class IsBeginningTag {
public:
    // prevent constructor by default
    IsBeginningTag& operator=(IsBeginningTag const&);
    IsBeginningTag(IsBeginningTag const&);
    IsBeginningTag();
};

}; // namespace dcsctp
