#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LightTexture {
public:
    // prevent constructor by default
    LightTexture& operator=(LightTexture const&);
    LightTexture(LightTexture const&);
    LightTexture();
};
