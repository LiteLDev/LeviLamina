#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/Texture2D.h"

namespace renoir {

struct Texture2DArray : public ::renoir::Texture2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke22f10;
    ::ll::UntypedStorage<1, 1> mUnk2cceca;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture2DArray& operator=(Texture2DArray const&);
    Texture2DArray(Texture2DArray const&);
    Texture2DArray();
};

} // namespace renoir
