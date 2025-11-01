#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct CompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc630a3;
    ::ll::UntypedStorage<4, 4> mUnk592731;
    ::ll::UntypedStorage<4, 4> mUnkfa7ea8;
    ::ll::UntypedStorage<1, 1> mUnkd7b0b9;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedImageDescription& operator=(CompressedImageDescription const&);
    CompressedImageDescription(CompressedImageDescription const&);
    CompressedImageDescription();

};

}
