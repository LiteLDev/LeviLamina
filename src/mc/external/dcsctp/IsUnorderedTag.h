#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class IsUnorderedTag {
public:
    // prevent constructor by default
    IsUnorderedTag& operator=(IsUnorderedTag const&);
    IsUnorderedTag(IsUnorderedTag const&);
    IsUnorderedTag();
};

} // namespace dcsctp
