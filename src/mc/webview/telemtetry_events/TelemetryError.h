#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TelemtetryEvents {

struct TelemetryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e2cc5;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryError& operator=(TelemetryError const&);
    TelemetryError(TelemetryError const&);
    TelemetryError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C auto toJsonStr() const;

    MCNAPI_C ~TelemetryError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace TelemtetryEvents
