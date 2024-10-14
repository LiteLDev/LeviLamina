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
    // vIndex: 0
    virtual ~EduAppConfigs() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct PackIdVersion const& EDUResourcePack();

    // NOLINTEND
};
