#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLogEndPoint {
public:
    // prevent constructor by default
    ContentLogEndPoint& operator=(ContentLogEndPoint const&);
    ContentLogEndPoint(ContentLogEndPoint const&);

public:
    // NOLINTBEGIN
    // symbol: ?log@ContentLogEndPoint@@UEAAXPEBD@Z
    MCVAPI void log(char const* message);

    // symbol: ??1ContentLogEndPoint@@UEAA@XZ
    MCVAPI ~ContentLogEndPoint();

    // symbol: ??0ContentLogEndPoint@@QEAA@XZ
    MCAPI ContentLogEndPoint();

    // NOLINTEND
};
