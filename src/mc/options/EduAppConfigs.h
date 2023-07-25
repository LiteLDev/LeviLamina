#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EduAppConfigs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUAPPCONFIGS
public:
    EduAppConfigs& operator=(EduAppConfigs const&) = delete;
    EduAppConfigs(EduAppConfigs const&)            = delete;
    EduAppConfigs()                                = delete;
#endif

public:
    /**
     * @symbol ?EDUResourcePack\@EduAppConfigs\@\@2UPackIdVersion\@\@B
     */
    MCAPI static struct PackIdVersion const EDUResourcePack;
};
