#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImageTelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7970fc;
    ::ll::UntypedStorage<4, 4>  mUnk7c2da9;
    ::ll::UntypedStorage<4, 4>  mUnk6a84dc;
    ::ll::UntypedStorage<4, 4>  mUnk734b8f;
    ::ll::UntypedStorage<8, 8>  mUnkc71583;
    ::ll::UntypedStorage<8, 24> mUnk9c9ad5;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageTelemetryInfo& operator=(ImageTelemetryInfo const&);
    ImageTelemetryInfo(ImageTelemetryInfo const&);
    ImageTelemetryInfo();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
