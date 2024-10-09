#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ActivationArguments {
public:
    // prevent constructor by default
    ActivationArguments& operator=(ActivationArguments const&);
    ActivationArguments(ActivationArguments const&);

public:
    // NOLINTBEGIN
    MCAPI ActivationArguments();

    MCAPI void preParseArguments();

    MCAPI ~ActivationArguments();

    // NOLINTEND
};

}; // namespace Bedrock
