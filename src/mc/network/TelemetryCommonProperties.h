#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

struct TelemetryCommonProperties {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBVIEW_TELEMETRYCOMMONPROPERTIES
public:
    TelemetryCommonProperties& operator=(TelemetryCommonProperties const&) = delete;
    TelemetryCommonProperties(TelemetryCommonProperties const&)            = delete;
    TelemetryCommonProperties()                                            = delete;
#endif

public:
};

}; // namespace Webview
