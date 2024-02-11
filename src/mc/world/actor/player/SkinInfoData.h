#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinInfoData {
public:
    // prevent constructor by default
    SkinInfoData& operator=(SkinInfoData const&);
    SkinInfoData(SkinInfoData const&);
    SkinInfoData();

public:
    // NOLINTBEGIN
    // symbol: ?isValidSize@SkinInfoData@@SA_N_K@Z
    MCAPI static bool isValidSize(uint64 skinSize);

    // NOLINTEND
};
