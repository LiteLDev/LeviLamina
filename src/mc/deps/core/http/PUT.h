#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct PUT {
public:
    // prevent constructor by default
    PUT& operator=(PUT const&);
    PUT(PUT const&);
    PUT();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& name();

    // NOLINTEND
};

}; // namespace Bedrock::Http::MethodType
