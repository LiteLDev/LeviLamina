#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Material {
public:
    // Material inner types define
    enum class AlphaMode : int {
        OpaqueMode = 0,
        Mask       = 1,
        Blend      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf0b0ae;
    ::ll::UntypedStorage<8, 16> mUnk9b9260;
    ::ll::UntypedStorage<8, 16> mUnk8e0bb7;
    ::ll::UntypedStorage<8, 16> mUnk460894;
    ::ll::UntypedStorage<4, 4>  mUnk5afaba;
    ::ll::UntypedStorage<8, 32> mUnkd1e7b8;
    ::ll::UntypedStorage<4, 4>  mUnkc1f094;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Material& operator=(Material const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Material();

    MCNAPI Material(::glTF::Material const&);

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Material();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glTF::Material const&);
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
