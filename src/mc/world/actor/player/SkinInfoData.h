#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mDefaultMeshName;
    ::ll::TypedStorage<1, 1, bool>                 mIsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>                 mIsDirty;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SkinInfoData() = default;
#else // LL_PLAT_C
    virtual ~SkinInfoData();
#endif

    virtual void
    updateSkin(::SerializedSkinRef const& skin, ::mce::Image const* skinData, ::mce::Image const* capeData) = 0;

    virtual bool hasValidTexture() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void resizeHalfSkinData(::mce::Image& image);

    MCAPI_C static void validateAlpha(::mce::Image& image, bool isPremium);

    MCAPI_C static bool verifyIsPremiumGeometry(::std::string const& geometryName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
