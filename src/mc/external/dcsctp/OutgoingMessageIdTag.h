#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class OutgoingMessageIdTag {
public:
    // prevent constructor by default
    OutgoingMessageIdTag& operator=(OutgoingMessageIdTag const&);
    OutgoingMessageIdTag(OutgoingMessageIdTag const&);
    OutgoingMessageIdTag();
};

} // namespace dcsctp
