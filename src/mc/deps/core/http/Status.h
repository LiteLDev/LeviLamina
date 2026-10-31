#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Status {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>               mValue;
    ::ll::TypedStorage<8, 16, ::std::error_code> mError;
    // NOLINTEND
};

} // namespace Bedrock::Http
