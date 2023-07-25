#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackwardsCompatTextureGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKWARDSCOMPATTEXTUREGROUP
public:
    BackwardsCompatTextureGroup& operator=(BackwardsCompatTextureGroup const&) = delete;
    BackwardsCompatTextureGroup(BackwardsCompatTextureGroup const&)            = delete;
    BackwardsCompatTextureGroup()                                              = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?invalidInfo\@BackwardsCompatTextureGroup\@\@0VBackwardsCompatTextureInfo\@\@B
     */
    MCAPI static class BackwardsCompatTextureInfo const invalidInfo;
};
