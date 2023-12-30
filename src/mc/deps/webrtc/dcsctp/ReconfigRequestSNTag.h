#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ReconfigRequestSNTag {
public:
    // prevent constructor by default
    ReconfigRequestSNTag& operator=(ReconfigRequestSNTag const&);
    ReconfigRequestSNTag(ReconfigRequestSNTag const&);
    ReconfigRequestSNTag();
};

}; // namespace dcsctp
