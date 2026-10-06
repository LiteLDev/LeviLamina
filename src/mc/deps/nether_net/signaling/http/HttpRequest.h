#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> method;
    ::ll::TypedStorage<8, 32, ::std::string> path;
    ::ll::TypedStorage<8, 32, ::std::string> body;
    // NOLINTEND
};

} // namespace NetherNet
