#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Dimension;
class BaseLightTextureImageBuilder {
    const Dimension *mDimension; // this+0x8
public:
    // prevent constructor by default
    BaseLightTextureImageBuilder& operator=(BaseLightTextureImageBuilder const&);
    BaseLightTextureImageBuilder(BaseLightTextureImageBuilder const&);
    BaseLightTextureImageBuilder();
};
