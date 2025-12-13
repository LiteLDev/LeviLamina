#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImageTelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk87c913;
    ::ll::UntypedStorage<4, 4>  mUnkc9ca9f;
    ::ll::UntypedStorage<4, 4>  mUnkec7549;
    ::ll::UntypedStorage<4, 4>  mUnkfc3d11;
    ::ll::UntypedStorage<8, 8>  mUnkc71583;
    ::ll::UntypedStorage<8, 24> mUnk9ac609;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageTelemetryInfo& operator=(ImageTelemetryInfo const&);
    ImageTelemetryInfo(ImageTelemetryInfo const&);
    ImageTelemetryInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ImageTelemetryInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
