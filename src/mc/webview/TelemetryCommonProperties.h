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
};

} // namespace Webview
