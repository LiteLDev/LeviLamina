#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

class SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>    mDefaultMeshName;
    ::ll::TypedStorage<1, 1, bool>              mIsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>              mIsDirty;
    ::ll::TypedStorage<8, 16, ::SerializedSkin> mSkin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SkinInfoData() = default;
#else // LL_PLAT_C
    virtual ~SkinInfoData();
#endif

    virtual void updateSkin(::SerializedSkin const&, ::mce::Image const*, ::mce::Image const*) = 0;

    virtual bool hasValidTexture() = 0;

    virtual bool validateAndResizeSkinData(::mce::Image& image, bool isPremium);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void
    copySkinPart(::mce::Image& image, int dx1, int dy1, int dx2, int dy2, int sx1, int sy1, int sx2, int sy2);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
#ifdef LL_PLAT_C
    MCAPI bool $validateAndResizeSkinData(::mce::Image& image, bool isPremium);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
