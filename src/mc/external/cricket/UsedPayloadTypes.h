#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class UsedPayloadTypes {
public:
    // prevent constructor by default
    UsedPayloadTypes& operator=(UsedPayloadTypes const&);
    UsedPayloadTypes(UsedPayloadTypes const&);
    UsedPayloadTypes();
};

} // namespace cricket
