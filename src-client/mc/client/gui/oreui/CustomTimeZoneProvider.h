#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ITimeZoneProvider.h"

namespace OreUI {

class CustomTimeZoneProvider : public ::cohtml::ITimeZoneProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void GetLocalTimezoneName(double timeMsUtc, char* buffer, uint64 maxBufferSize) /*override*/;

    virtual double GetDaylightSavingsOffset(double timeMsUtc) /*override*/;

    virtual double GetLocalTimeOffset(double timeMs, bool isTimeUtc) /*override*/;

    virtual ~CustomTimeZoneProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $GetLocalTimezoneName(double timeMsUtc, char* buffer, uint64 maxBufferSize);

    MCAPI double $GetDaylightSavingsOffset(double timeMsUtc);

    MCAPI double $GetLocalTimeOffset(double timeMs, bool isTimeUtc);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
