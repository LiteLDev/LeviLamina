#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackwardsCompatTextureInfo {

public:
    // prevent constructor by default
    BackwardsCompatTextureInfo& operator=(BackwardsCompatTextureInfo const&) = delete;
    BackwardsCompatTextureInfo(BackwardsCompatTextureInfo const&)            = delete;
    BackwardsCompatTextureInfo()                                             = delete;
};
