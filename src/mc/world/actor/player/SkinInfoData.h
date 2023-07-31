#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinInfoData {

public:
    // prevent constructor by default
    SkinInfoData& operator=(SkinInfoData const&) = delete;
    SkinInfoData(SkinInfoData const&)            = delete;
    SkinInfoData()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isValidSize\@SkinInfoData\@\@SA_N_K\@Z
     */
    MCAPI static bool isValidSize(uint64_t);
    // NOLINTEND
};
