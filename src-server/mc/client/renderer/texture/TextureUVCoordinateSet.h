#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextureUVCoordinateSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk59c033;
    ::ll::UntypedStorage<4, 4>  mUnk65ef8d;
    ::ll::UntypedStorage<4, 4>  mUnkee5924;
    ::ll::UntypedStorage<4, 4>  mUnkf09c68;
    ::ll::UntypedStorage<4, 4>  mUnk89d2f1;
    ::ll::UntypedStorage<2, 2>  mUnke9e052;
    ::ll::UntypedStorage<2, 2>  mUnkff1029;
    ::ll::UntypedStorage<8, 56> mUnkf46eac;
    ::ll::UntypedStorage<1, 1>  mUnkfb1c21;
    ::ll::UntypedStorage<2, 2>  mUnkf4f7b1;
    ::ll::UntypedStorage<2, 2>  mUnk5269c9;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureUVCoordinateSet& operator=(TextureUVCoordinateSet const&);
    TextureUVCoordinateSet(TextureUVCoordinateSet const&);
    TextureUVCoordinateSet();
};
