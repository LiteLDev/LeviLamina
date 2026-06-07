#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Scene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4f789c;
    ::ll::UntypedStorage<8, 32> mUnk3a6c45;
    ::ll::UntypedStorage<4, 4>  mUnk506e0a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Scene& operator=(Scene const&);
    Scene(Scene const&);
    Scene();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Scene& operator=(Scene const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Scene();

    MCNAPI Scene(::glTF::Scene const&);

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Scene();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glTF::Scene const&);
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
