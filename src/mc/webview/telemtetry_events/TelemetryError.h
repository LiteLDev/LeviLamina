#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TelemtetryEvents {

struct TelemetryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk85be9a;
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace TelemtetryEvents
