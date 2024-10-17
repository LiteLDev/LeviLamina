#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct HEAD {
public:
    // prevent constructor by default
    HEAD& operator=(HEAD const&);
    HEAD(HEAD const&);
    HEAD();

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
