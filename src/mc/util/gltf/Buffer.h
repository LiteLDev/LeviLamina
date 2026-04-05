#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkecc731;
    ::ll::UntypedStorage<4, 4>  mUnkf25ebd;
    ::ll::UntypedStorage<8, 32> mUnk7f9932;
    ::ll::UntypedStorage<4, 4>  mUnk916439;
    // NOLINTEND

public:
    // prevent constructor by default
    Buffer& operator=(Buffer const&);
    Buffer(Buffer const&);
    Buffer();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~Buffer();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace glTF
