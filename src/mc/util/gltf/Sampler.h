#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Sampler {
public:
    // Sampler inner types define
    enum class MagFilter : int {
        Nearest = 9728,
        Linear  = 9729,
    };

    enum class MinFilter : int {
        Nearest              = 9728,
        Linear               = 9729,
        NearestMipmapNearest = 9984,
        LinearMipmapNearest  = 9985,
        NearestMipmapLinear  = 9986,
        LinearMipmapLinear   = 9987,
    };

    enum class WrapS : int {
        ClampToEdge    = 33071,
        MirroredRepeat = 33648,
        Repeat         = 10497,
    };

    enum class WrapT : int {
        ClampToEdge    = 33071,
        MirroredRepeat = 33648,
        Repeat         = 10497,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkd31c3c;
    ::ll::UntypedStorage<4, 8>  mUnkd857e8;
    ::ll::UntypedStorage<4, 8>  mUnke8e415;
    ::ll::UntypedStorage<4, 8>  mUnkb35439;
    ::ll::UntypedStorage<8, 32> mUnk1261ff;
    ::ll::UntypedStorage<4, 4>  mUnk2ae111;
    // NOLINTEND

public:
    // prevent constructor by default
    Sampler& operator=(Sampler const&);
    Sampler(Sampler const&);
    Sampler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~Sampler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace glTF
