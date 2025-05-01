#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TerrainLayer {
public:
    // TerrainLayer inner types define
    enum class Transparency : uchar {
        None   = 0,
        Sorted = 1,
    };

    enum class Detail : uchar {
        Near = 0,
        Far  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb38f06;
    ::ll::UntypedStorage<1, 1>  mUnkf409d9;
    ::ll::UntypedStorage<8, 32> mUnk2eef35;
    ::ll::UntypedStorage<8, 8>  mUnk70f6a4;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainLayer& operator=(TerrainLayer const&);
    TerrainLayer(TerrainLayer const&);
    TerrainLayer();
};
