#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class StaticString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> str_;
    // NOLINTEND
};

} // namespace Json
