#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Scene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4f789c;
    ::ll::UntypedStorage<8, 32> mUnk3a6c45;
    ::ll::UntypedStorage<4, 4>  mUnk506e0a;
    // NOLINTEND

public:
    // prevent constructor by default
    Scene& operator=(Scene const&);
    Scene(Scene const&);
    Scene();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~Scene();
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
