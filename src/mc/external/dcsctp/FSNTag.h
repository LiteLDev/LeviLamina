#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class FSNTag {
public:
    // prevent constructor by default
    FSNTag& operator=(FSNTag const&);
    FSNTag(FSNTag const&);
    FSNTag();
};

} // namespace dcsctp
