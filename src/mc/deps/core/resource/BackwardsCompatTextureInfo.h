#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackwardsCompatTextureInfo {
public:
    // prevent constructor by default
    BackwardsCompatTextureInfo& operator=(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo();

public:
    // NOLINTBEGIN
    MCAPI ~BackwardsCompatTextureInfo();

    // NOLINTEND
};
