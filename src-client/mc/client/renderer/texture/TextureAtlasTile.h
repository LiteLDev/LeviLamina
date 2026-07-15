#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextureAtlasTile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3c7861;
    ::ll::UntypedStorage<8, 24> mUnkb1a08e;
    ::ll::UntypedStorage<4, 16> mUnk62d1eb;
    ::ll::UntypedStorage<1, 1>  mUnkd942a3;
    ::ll::UntypedStorage<4, 4>  mUnk7a10db;
    ::ll::UntypedStorage<4, 16> mUnk2f522b;
    ::ll::UntypedStorage<1, 1>  mUnkd721bd;
    ::ll::UntypedStorage<1, 1>  mUnkdbba8e;
    ::ll::UntypedStorage<1, 1>  mUnk129141;
    ::ll::UntypedStorage<4, 4>  mUnk62b7a5;
    ::ll::UntypedStorage<4, 4>  mUnk6731d6;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasTile& operator=(TextureAtlasTile const&);
    TextureAtlasTile(TextureAtlasTile const&);
    TextureAtlasTile();
};
