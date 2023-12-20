#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class SSNTag {
public:
    // prevent constructor by default
    SSNTag& operator=(SSNTag const&);
    SSNTag(SSNTag const&);
    SSNTag();
};

}; // namespace dcsctp
