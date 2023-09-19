#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EduAppConfigs {
public:
    // prevent constructor by default
    EduAppConfigs& operator=(EduAppConfigs const&);
    EduAppConfigs(EduAppConfigs const&);
    EduAppConfigs();

public:
    // NOLINTBEGIN
    // symbol: ?EDUResourcePack@EduAppConfigs@@2UPackIdVersion@@B
    MCAPI static struct PackIdVersion const EDUResourcePack;

    // NOLINTEND
};
