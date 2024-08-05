#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLogEndPoint {
public:
    // prevent constructor by default
    ContentLogEndPoint& operator=(ContentLogEndPoint const&);
    ContentLogEndPoint(ContentLogEndPoint const&);

public:
    // NOLINTBEGIN
    MCVAPI void log(char const* message);

    MCVAPI ~ContentLogEndPoint();

    MCAPI ContentLogEndPoint();

    // NOLINTEND
};
