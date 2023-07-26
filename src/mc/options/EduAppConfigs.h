#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EduAppConfigs {

public:
    // prevent constructor by default
    EduAppConfigs& operator=(EduAppConfigs const&) = delete;
    EduAppConfigs(EduAppConfigs const&)            = delete;
    EduAppConfigs()                                = delete;

public:
    /**
     * @symbol ?EDUResourcePack\@EduAppConfigs\@\@2UPackIdVersion\@\@B
     */
    MCAPI static struct PackIdVersion const EDUResourcePack; // NOLINT
};
