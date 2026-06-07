#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

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
    ::ll::UntypedStorage<8, 32> mUnk35e82d;
    ::ll::UntypedStorage<4, 4>  mUnk2ae111;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Sampler& operator=(Sampler const&);
    Sampler(Sampler const&);
    Sampler();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Sampler& operator=(Sampler const&);
    Sampler(Sampler const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Sampler();

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Sampler();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
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
