#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct GameplayUIDebugData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> eventLog;
    // NOLINTEND
};

} // namespace GameplayUI
