#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

class MaterialVariants {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<1, 1, ::mce::MaterialPtr> mSkinningMaterialPtr;
    ::ll::TypedStorage<1, 1, ::mce::MaterialPtr> mSkinningColorMaterialPtr;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningMaterialPtr;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningColorMaterialPtr;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialVariants(MaterialVariants const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C MaterialVariants();

    MCAPI_C explicit MaterialVariants(::mce::MaterialPtr const& skinningMaterial);

    MCAPI_C ::MaterialVariants& operator=(::MaterialVariants&&);

    MCFOLD_C ::MaterialVariants& operator=(::MaterialVariants const&);

    MCAPI_C ~MaterialVariants();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::MaterialVariants const& getDefaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::mce::MaterialPtr const& skinningMaterial);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
