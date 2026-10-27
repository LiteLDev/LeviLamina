#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IAppHolder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool createApp() = 0;
    // NOLINTEND
};

} // namespace Bedrock
