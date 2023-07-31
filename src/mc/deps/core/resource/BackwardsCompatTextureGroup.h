#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackwardsCompatTextureGroup {

public:
    // prevent constructor by default
    BackwardsCompatTextureGroup& operator=(BackwardsCompatTextureGroup const&) = delete;
    BackwardsCompatTextureGroup(BackwardsCompatTextureGroup const&)            = delete;
    BackwardsCompatTextureGroup()                                              = delete;

private:
    // NOLINTBEGIN
    /**
     * @symbol ?invalidInfo\@BackwardsCompatTextureGroup\@\@0VBackwardsCompatTextureInfo\@\@B
     */
    MCAPI static class BackwardsCompatTextureInfo const invalidInfo;
    // NOLINTEND
};
