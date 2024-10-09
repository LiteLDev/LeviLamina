#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class ScriptContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // prevent constructor by default
    ScriptContentLogEndPoint& operator=(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint();

public:
    // NOLINTBEGIN
    MCVAPI void flush();

    MCVAPI bool isEnabled() const;

    MCVAPI void log(::LogArea, ::LogLevel logLevel, char const* message);

    MCVAPI bool logOnlyOnce() const;

    MCVAPI void setEnabled(bool newState);

    MCAPI explicit ScriptContentLogEndPoint(class ScriptDebugger& debugger);

    // NOLINTEND
};
