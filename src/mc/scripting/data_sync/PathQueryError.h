#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI::PathUtility {

struct PathQueryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           parsingError;
    ::ll::TypedStorage<8, 32, ::std::string> message;
    // NOLINTEND
};

} // namespace Bedrock::DDUI::PathUtility
