#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class ITimeZoneProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITimeZoneProvider() = default;

    virtual void GetLocalTimezoneName(double timeMsUtc, char* buffer, uint64 maxBufferSize) = 0;

    virtual double GetDaylightSavingsOffset(double timeMsUtc) = 0;

    virtual double GetLocalTimeOffset(double timeMs, bool isTimeUtc) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
