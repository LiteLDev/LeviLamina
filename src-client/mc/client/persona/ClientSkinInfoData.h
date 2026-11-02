#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/image/Image.h"
#include "mc/deps/minecraft_renderer/renderer/BedrockTexture.h"
#include "mc/world/actor/player/SkinInfoData.h"

// auto generated forward declare list
// clang-format off
class SerializedSkinRef;
// clang-format on

class ClientSkinInfoData : public ::SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                    mSubClientId;
    ::ll::TypedStorage<8, 48, ::BedrockTexture>                mSkinTexture;
    ::ll::TypedStorage<8, 24, ::std::vector<::BedrockTexture>> mSkinAnimatedTextures;
    ::ll::TypedStorage<8, 48, ::BedrockTexture>                mCapeTexture;
    ::ll::TypedStorage<8, 48, ::mce::Image>                    mLodSkinImage;
    ::ll::TypedStorage<8, 48, ::BedrockTexture>                mLodSkinTexture;
    ::ll::TypedStorage<8, 32, ::std::string>                   mLodSkinProfileHash;
    ::ll::TypedStorage<1, 1, bool>                             mValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientSkinInfoData() /*override*/;

    virtual void updateSkin(
        ::SerializedSkinRef const& skin,
        ::mce::Image const*        skinData,
        ::mce::Image const*        capeData
    ) /*override*/;

    virtual bool hasValidTexture() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientSkinInfoData();

    MCNAPI void setSkinAnimatedTextures(::std::vector<::BedrockTexture>&& newTextures);

    MCNAPI bool trySetLodSkinImage(::mce::Image&& image, ::std::string const& profileHash);

    MCNAPI void unload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $updateSkin(::SerializedSkinRef const& skin, ::mce::Image const* skinData, ::mce::Image const* capeData);

    MCNAPI bool $hasValidTexture();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
