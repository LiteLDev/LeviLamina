#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk5e7a90;
    ::ll::UntypedStorage<4, 24> mUnk88ed42;
    ::ll::UntypedStorage<8, 56> mUnkd6a048;
    ::ll::UntypedStorage<4, 24> mUnkc99e19;
    ::ll::UntypedStorage<4, 16> mUnkcb1222;
    ::ll::UntypedStorage<4, 64> mUnkad2404;
    ::ll::UntypedStorage<4, 64> mUnkde35ba;
    ::ll::UntypedStorage<1, 1>  mUnkfaf113;
    ::ll::UntypedStorage<1, 1>  mUnk6b1650;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureData& operator=(TextureData const&);
    TextureData(TextureData const&);
    TextureData();
};
