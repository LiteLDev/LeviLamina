#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackwardsCompatTextureGroup {
public:
    // prevent constructor by default
    BackwardsCompatTextureGroup& operator=(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class BackwardsCompatTextureInfo const& invalidInfo();

    // NOLINTEND
};
