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
#ifdef LL_PLAT_C
    MCNAPI TelemetryCommonProperties(::Webview::TelemetryCommonProperties&&);

    MCNAPI ::Webview::TelemetryCommonProperties& operator=(::Webview::TelemetryCommonProperties&&);

    MCNAPI ~TelemetryCommonProperties();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Webview::TelemetryCommonProperties&&);
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

} // namespace Webview
