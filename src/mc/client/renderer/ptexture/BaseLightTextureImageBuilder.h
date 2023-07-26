#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseLightTextureImageBuilder {

public:
    // prevent constructor by default
    BaseLightTextureImageBuilder& operator=(BaseLightTextureImageBuilder const&) = delete;
    BaseLightTextureImageBuilder(BaseLightTextureImageBuilder const&)            = delete;
    BaseLightTextureImageBuilder()                                               = delete;
};
