#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct GET {
public:
    // prevent constructor by default
    GET& operator=(GET const&);
    GET(GET const&);
    GET();

public:
    // NOLINTBEGIN
    MCAPI static std::string const name;

    // NOLINTEND
};

}; // namespace Bedrock::Http::MethodType
