#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
// clang-format on

class MaterialVariants {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 1> mUnk2f7212;
    ::ll::UntypedStorage<1, 1> mUnkbf3cbc;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 16> mUnk2f7212;
    ::ll::UntypedStorage<8, 16> mUnkbf3cbc;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialVariants(MaterialVariants const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C MaterialVariants();

    MCNAPI_C explicit MaterialVariants(::mce::MaterialPtr const& skinningMaterial);

    MCNAPI_C ::MaterialVariants& operator=(::MaterialVariants&&);

    MCNAPI_C ::MaterialVariants& operator=(::MaterialVariants const&);

    MCNAPI_C ~MaterialVariants();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::MaterialVariants const& getDefaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::mce::MaterialPtr const& skinningMaterial);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
