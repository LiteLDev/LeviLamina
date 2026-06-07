#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct ValidationFail {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc3ca4a;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidationFail& operator=(ValidationFail const&);
    ValidationFail(ValidationFail const&);
    ValidationFail();
};

} // namespace Bedrock::DeviceIdErrorType
