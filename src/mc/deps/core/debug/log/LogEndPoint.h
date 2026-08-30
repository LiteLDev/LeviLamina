#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class LogEndPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogEndPoint();

    virtual void log(char const*) = 0;

    virtual void flush() = 0;

    virtual void setEnabled(bool newState) = 0;

    virtual bool isEnabled() const = 0;
    // NOLINTEND
};

} // namespace Bedrock
