#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

struct TelemetryCommonProperties {
public:
    // prevent constructor by default
    TelemetryCommonProperties& operator=(TelemetryCommonProperties const&);
    TelemetryCommonProperties(TelemetryCommonProperties const&);
    TelemetryCommonProperties();
};

}; // namespace Webview
