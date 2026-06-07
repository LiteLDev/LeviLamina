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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Blob();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Blob(::std::unique_ptr<uchar[0]> data, uint64 size);

    MCFOLD void* getBufferPointer();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::unique_ptr<uchar[0]> data, uint64 size);
#endif
    // NOLINTEND
};

} // namespace cg
