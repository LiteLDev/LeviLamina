#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct DEL {
public:
    // prevent constructor by default
    DEL& operator=(DEL const&);
    DEL(DEL const&);
    DEL();

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
