#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class ITimeZoneProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITimeZoneProvider() = default;

    virtual void GetLocalTimezoneName(double, char*, uint64) = 0;

    virtual double GetDaylightSavingsOffset(double) = 0;

    virtual double GetLocalTimeOffset(double, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
