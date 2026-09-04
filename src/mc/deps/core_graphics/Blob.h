#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

class Blob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<uchar[0]>> mBlobData;
    ::ll::TypedStorage<8, 8, uint64>                      mBlobSize;
    // NOLINTEND
};

} // namespace cg
