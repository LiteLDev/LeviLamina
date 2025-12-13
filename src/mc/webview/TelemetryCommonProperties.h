#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

struct TelemetryCommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5e7e37;
    ::ll::UntypedStorage<8, 32> mUnk11cd23;
    ::ll::UntypedStorage<8, 40> mUnkf4aec7;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryCommonProperties& operator=(TelemetryCommonProperties const&);
    TelemetryCommonProperties(TelemetryCommonProperties const&);
    TelemetryCommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C TelemetryCommonProperties(::Webview::TelemetryCommonProperties&&);

    MCNAPI_C ::Webview::TelemetryCommonProperties& operator=(::Webview::TelemetryCommonProperties&&);

    MCNAPI_C ~TelemetryCommonProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Webview::TelemetryCommonProperties&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Webview
