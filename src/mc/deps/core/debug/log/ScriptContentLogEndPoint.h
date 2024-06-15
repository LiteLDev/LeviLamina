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
    // symbol: ?flush@ScriptContentLogEndPoint@@UEAAXXZ
    MCVAPI void flush();

    // symbol: ?isEnabled@ScriptContentLogEndPoint@@UEBA_NXZ
    MCVAPI bool isEnabled() const;

    // symbol: ?log@ScriptContentLogEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
    MCVAPI void log(::LogArea, ::LogLevel, char const*);

    // symbol: ?logOnlyOnce@ScriptContentLogEndPoint@@UEBA_NXZ
    MCVAPI bool logOnlyOnce() const;

    // symbol: ?setEnabled@ScriptContentLogEndPoint@@UEAAX_N@Z
    MCVAPI void setEnabled(bool);

    // symbol: ??0ScriptContentLogEndPoint@@QEAA@AEAVScriptDebugger@@@Z
    MCAPI explicit ScriptContentLogEndPoint(class ScriptDebugger&);

    // NOLINTEND
};
