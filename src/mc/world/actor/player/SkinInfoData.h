#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinInfoData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKININFODATA
public:
    SkinInfoData& operator=(SkinInfoData const&) = delete;
    SkinInfoData(SkinInfoData const&)            = delete;
    SkinInfoData()                               = delete;
#endif

public:
    /**
     * @symbol ?isValidSize\@SkinInfoData\@\@SA_N_K\@Z
     */
    MCAPI static bool isValidSize(unsigned __int64);
};
