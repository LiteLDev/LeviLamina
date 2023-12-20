#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class MIDTag {
public:
    // prevent constructor by default
    MIDTag& operator=(MIDTag const&);
    MIDTag(MIDTag const&);
    MIDTag();
};

}; // namespace dcsctp
