#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

struct IntermediateBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk85a922;
    ::ll::UntypedStorage<4, 4>  mUnkc627bf;
    ::ll::UntypedStorage<4, 4>  mUnkb7337e;
    ::ll::UntypedStorage<8, 24> mUnk6f0117;
    ::ll::UntypedStorage<4, 8>  mUnk9547a8;
    ::ll::UntypedStorage<4, 8>  mUnk76d2f2;
    ::ll::UntypedStorage<8, 24> mUnkce6114;
    ::ll::UntypedStorage<4, 8>  mUnk42db26;
    // NOLINTEND

public:
    // prevent constructor by default
    IntermediateBlockData& operator=(IntermediateBlockData const&);
    IntermediateBlockData(IntermediateBlockData const&);
    IntermediateBlockData();
};

} // namespace astc_codec
