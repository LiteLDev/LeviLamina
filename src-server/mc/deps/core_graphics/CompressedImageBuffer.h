#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

class CompressedImageBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk19e841;
    ::ll::UntypedStorage<4, 16> mUnkb02cbf;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedImageBuffer& operator=(CompressedImageBuffer const&);
    CompressedImageBuffer(CompressedImageBuffer const&);
    CompressedImageBuffer();

};

}
