#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BossbarInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke74217;
    ::ll::UntypedStorage<4, 4>  mUnk8a8a61;
    ::ll::UntypedStorage<4, 4>  mUnk740b40;
    ::ll::UntypedStorage<1, 1>  mUnk7d62fa;
    ::ll::UntypedStorage<8, 16> mUnk918548;
    ::ll::UntypedStorage<8, 24> mUnk633999;
    // NOLINTEND

public:
    // prevent constructor by default
    BossbarInfo& operator=(BossbarInfo const&);
    BossbarInfo(BossbarInfo const&);
    BossbarInfo();
};
