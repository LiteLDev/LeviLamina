#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

struct TelemetryCommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaee8a1;
    ::ll::UntypedStorage<8, 32> mUnk1fc2a6;
    ::ll::UntypedStorage<8, 40> mUnk80d437;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryCommonProperties& operator=(TelemetryCommonProperties const&);
    TelemetryCommonProperties(TelemetryCommonProperties const&);
    TelemetryCommonProperties();

public:
    // member functions
    // NOLINTBEGIN

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
