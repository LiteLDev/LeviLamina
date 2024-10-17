#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct ValidationFail {
public:
    // prevent constructor by default
    ValidationFail& operator=(ValidationFail const&);
    ValidationFail(ValidationFail const&);
    ValidationFail();
};

}; // namespace Bedrock::DeviceIdErrorType
