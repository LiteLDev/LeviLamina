#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BiomeIdType;
// clang-format on

class BlendingBiomeProvider2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::array<::BiomeIdType, 256>&> mBiomes;
    ::ll::TypedStorage<1, 1, uchar>                             mSubChunkBlockIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingBiomeProvider2D& operator=(BlendingBiomeProvider2D const&);
    BlendingBiomeProvider2D(BlendingBiomeProvider2D const&);
    BlendingBiomeProvider2D();
};
