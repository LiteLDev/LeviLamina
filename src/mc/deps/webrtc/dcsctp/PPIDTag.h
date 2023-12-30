#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class PPIDTag {
public:
    // prevent constructor by default
    PPIDTag& operator=(PPIDTag const&);
    PPIDTag(PPIDTag const&);
    PPIDTag();
};

}; // namespace dcsctp
