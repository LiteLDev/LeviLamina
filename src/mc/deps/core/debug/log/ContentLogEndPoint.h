#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLogEndPoint {
public:
    // prevent constructor by default
    ContentLogEndPoint& operator=(ContentLogEndPoint const&) = delete;
    ContentLogEndPoint(ContentLogEndPoint const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ?log@ContentLogEndPoint@@UEAAXPEBD@Z
    MCVAPI void log(char const*);

    // symbol: ??1ContentLogEndPoint@@UEAA@XZ
    MCVAPI ~ContentLogEndPoint();

    // symbol: ??0ContentLogEndPoint@@QEAA@XZ
    MCAPI ContentLogEndPoint();

    // NOLINTEND
};
