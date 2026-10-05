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
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<1, 1, bool>                 mIsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>                 mIsDirty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinInfoData();

    virtual void
    updateSkin(::SerializedSkinRef const& skin, ::mce::Image const* skinData, ::mce::Image const* capeData) = 0;

    virtual bool hasValidTexture() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
