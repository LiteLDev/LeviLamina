#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/enums/LogArea.h"
#include "mc/enums/LogLevel.h"

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

    MCVAPI void log(::LogArea, ::LogLevel, char const*);

    MCVAPI bool logOnlyOnce() const;

    MCVAPI void setEnabled(bool);

    MCAPI explicit ScriptContentLogEndPoint(class ScriptDebugger&);

    // NOLINTEND
};
