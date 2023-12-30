#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MoonPhases.h"

namespace LevelUtils {
// NOLINTBEGIN
// symbol: ?getDay@LevelUtils@@YAHH@Z
MCAPI int getDay(int);

// symbol: ?getMoonPhase@LevelUtils@@YA?AW4MoonPhases@@AEBVILevel@@@Z
MCAPI ::MoonPhases getMoonPhase(class ILevel const&);

// symbol: ?getTimeOfDay@LevelUtils@@YAHH@Z
MCAPI int getTimeOfDay(int);

// symbol: ?projectToTimeOfDay@LevelUtils@@YAHHH@Z
MCAPI int projectToTimeOfDay(int currentTime, int targetTime);
// NOLINTEND

}; // namespace LevelUtils
