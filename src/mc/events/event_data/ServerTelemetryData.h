#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct ServerTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk64ca34;
    ::ll::UntypedStorage<8, 32> mUnk1d4791;
    ::ll::UntypedStorage<8, 32> mUnkacbc35;
    ::ll::UntypedStorage<8, 32> mUnk1276d3;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ServerTelemetryData& operator=(ServerTelemetryData const&);
    ServerTelemetryData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ServerTelemetryData();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerTelemetryData(::Social::Events::ServerTelemetryData const&);

#ifdef LL_PLAT_C
    MCNAPI ::Social::Events::ServerTelemetryData& operator=(::Social::Events::ServerTelemetryData&&);

    MCNAPI ::Social::Events::ServerTelemetryData& operator=(::Social::Events::ServerTelemetryData const&);
#endif

    MCNAPI ~ServerTelemetryData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::ServerTelemetryData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
