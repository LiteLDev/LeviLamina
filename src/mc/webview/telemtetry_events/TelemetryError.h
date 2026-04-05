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
#ifdef LL_PLAT_C
    MCNAPI auto toJsonStr() const;

    MCNAPI ~TelemetryError();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace TelemtetryEvents
