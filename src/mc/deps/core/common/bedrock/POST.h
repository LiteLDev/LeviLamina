#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct POST {
public:
    // prevent constructor by default
    POST& operator=(POST const&);
    POST(POST const&);
    POST();

public:
    // NOLINTBEGIN
    MCAPI static std::string const name;

    // NOLINTEND
};

}; // namespace Bedrock::Http::MethodType
