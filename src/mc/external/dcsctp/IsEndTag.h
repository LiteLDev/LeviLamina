#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class IsEndTag {
public:
    // prevent constructor by default
    IsEndTag& operator=(IsEndTag const&);
    IsEndTag(IsEndTag const&);
    IsEndTag();
};

} // namespace dcsctp
