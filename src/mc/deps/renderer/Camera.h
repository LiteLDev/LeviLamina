#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Camera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk469690;
    ::ll::UntypedStorage<8, 64>  mUnkc5fde2;
    ::ll::UntypedStorage<8, 64>  mUnkadd7ad;
    ::ll::UntypedStorage<4, 64>  mUnkb32d4f;
    ::ll::UntypedStorage<4, 12>  mUnk6ebded;
    ::ll::UntypedStorage<4, 12>  mUnk6a4ce8;
    ::ll::UntypedStorage<4, 12>  mUnk8e696d;
    ::ll::UntypedStorage<4, 12>  mUnk897dbc;
    ::ll::UntypedStorage<4, 4>   mUnk30d55f;
    ::ll::UntypedStorage<4, 4>   mUnk6791f3;
    ::ll::UntypedStorage<4, 4>   mUnk476215;
    ::ll::UntypedStorage<4, 4>   mUnk365074;
    ::ll::UntypedStorage<4, 192> mUnke2deeb;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Camera();

    MCNAPI_C Camera(::mce::Camera const&);

    MCNAPI_C ::mce::Camera& operator=(::mce::Camera const&);

    MCNAPI_C void updateViewMatrixDependencies();

    MCNAPI_C ~Camera();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::mce::Camera const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
