#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class TieTagTag {
public:
    // prevent constructor by default
    TieTagTag& operator=(TieTagTag const&);
    TieTagTag(TieTagTag const&);
    TieTagTag();
};

}; // namespace dcsctp
