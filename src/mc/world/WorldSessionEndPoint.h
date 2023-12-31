#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/enums/LogArea.h"
#include "mc/enums/LogLevel.h"

class WorldSessionEndPoint : public ::ContentLogEndPoint {
public:
    // prevent constructor by default
    WorldSessionEndPoint& operator=(WorldSessionEndPoint const&);
    WorldSessionEndPoint(WorldSessionEndPoint const&);
    WorldSessionEndPoint();

public:
    // NOLINTBEGIN
    // symbol: ?flush@WorldSessionEndPoint@@UEAAXXZ
    MCVAPI void flush();

    // symbol: ?isEnabled@WorldSessionEndPoint@@UEBA_NXZ
    MCVAPI bool isEnabled() const;

    // symbol: ?log@WorldSessionEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
    MCVAPI void log(::LogArea area, ::LogLevel level, char const* message);

    // symbol: ?logOnlyOnce@WorldSessionEndPoint@@UEBA_NXZ
    MCVAPI bool logOnlyOnce() const;

    // symbol: ?setEnabled@WorldSessionEndPoint@@UEAAX_N@Z
    MCVAPI void setEnabled(bool newState);

    // symbol: ??0WorldSessionEndPoint@@QEAA@AEAVIMinecraftEventing@@@Z
    MCAPI explicit WorldSessionEndPoint(class IMinecraftEventing& eventing);

    // NOLINTEND
};
