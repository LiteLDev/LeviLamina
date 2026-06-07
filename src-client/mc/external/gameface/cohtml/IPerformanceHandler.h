#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Profile {

class IPerformanceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPerformanceHandler() = default;

    virtual void WriteLog(char const*, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml::Profile
