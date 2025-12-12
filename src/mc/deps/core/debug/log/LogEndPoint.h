#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class LogEndPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogEndPoint() = default;

    virtual void log(char const*) = 0;

    virtual void flush() = 0;

    virtual void setEnabled(bool) = 0;

    virtual bool isEnabled() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
