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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MaterialVariants(MaterialVariants const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI MaterialVariants();

    MCAPI explicit MaterialVariants(::mce::MaterialPtr const& skinningMaterial);

    MCFOLD ::MaterialVariants& operator=(::MaterialVariants&&);

    MCFOLD ::MaterialVariants& operator=(::MaterialVariants const&);

    MCAPI ~MaterialVariants();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::MaterialVariants const& getDefaultErrorValue();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::mce::MaterialPtr const& skinningMaterial);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
