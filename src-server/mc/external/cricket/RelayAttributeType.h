#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class RelayAttributeType : int {
    Lifetime           = 13,
    MagicCookie        = 15,
    Bandwidth          = 16,
    DestinationAddress = 17,
    SourceAddress2     = 18,
    Data               = 19,
    Options            = 32769,
};

}
