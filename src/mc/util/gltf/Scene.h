#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Scene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf69cc5;
    ::ll::UntypedStorage<8, 32> mUnk135110;
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
    MCNAPI_C ~Scene();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace glTF
