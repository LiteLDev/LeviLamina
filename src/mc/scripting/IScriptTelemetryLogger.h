#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptTelemetryLogger {
public:
    // prevent constructor by default
    IScriptTelemetryLogger& operator=(IScriptTelemetryLogger const&);
    IScriptTelemetryLogger(IScriptTelemetryLogger const&);
    IScriptTelemetryLogger();
};
