#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinInfoData {

public:
    // prevent constructor by default
    SkinInfoData& operator=(SkinInfoData const&) = delete;
    SkinInfoData(SkinInfoData const&)            = delete;
    SkinInfoData()                               = delete;

public:
    /**
     * @symbol ?isValidSize\@SkinInfoData\@\@SA_N_K\@Z
     */
    MCAPI static bool isValidSize(unsigned __int64); // NOLINT
};
