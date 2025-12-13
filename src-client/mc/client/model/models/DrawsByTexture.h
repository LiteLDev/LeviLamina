#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DrawsByTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk98c03c;
    ::ll::UntypedStorage<8, 24> mUnk5a4122;
    ::ll::UntypedStorage<8, 24> mUnk1be771;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawsByTexture& operator=(DrawsByTexture const&);
    DrawsByTexture(DrawsByTexture const&);
    DrawsByTexture();
};
