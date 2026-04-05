#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct BufferView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk36aa81;
    ::ll::UntypedStorage<4, 4>  mUnk16272b;
    ::ll::UntypedStorage<4, 4>  mUnk4da122;
    ::ll::UntypedStorage<8, 32> mUnk29bc6d;
    ::ll::UntypedStorage<4, 4>  mUnk74b307;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferView& operator=(BufferView const&);
    BufferView(BufferView const&);
    BufferView();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~BufferView();
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
