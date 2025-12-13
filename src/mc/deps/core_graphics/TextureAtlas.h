#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

class TextureAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf286cc;
    ::ll::UntypedStorage<8, 24> mUnk53586f;
    ::ll::UntypedStorage<4, 24> mUnk11415f;
    ::ll::UntypedStorage<4, 4>  mUnk3c2d00;
    ::ll::UntypedStorage<4, 4>  mUnkb52aed;
    ::ll::UntypedStorage<8, 8>  mUnk35500e;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas& operator=(TextureAtlas const&);
    TextureAtlas(TextureAtlas const&);
    TextureAtlas();
};

} // namespace cg
