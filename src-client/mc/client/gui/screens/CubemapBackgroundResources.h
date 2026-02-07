#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace mce { class TextureGroup; }
namespace mce { struct TextureResourceService; }
// clang-format on

class CubemapBackgroundResources : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
public:
    // CubemapBackgroundResources inner types define
    enum class CubemapType : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mIsVanillaCubemap;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager>> mResourcePackManager;
    ::ll::TypedStorage<8, 192, ::std::array<::mce::TexturePtr, 6>>                  mPanoramaImages;
    ::ll::TypedStorage<8, 336, ::std::array<::ResourceLocation, 6>>                 mPanormaResourceLocations;
    ::ll::TypedStorage<8, 336, ::std::array<::ResourceLocation, 6>>                 mPanoramaHDRResourceLocations;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>                                 mCubemapTexture;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                   mOverlayLocation;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                    mOverlayTexture;
    ::ll::TypedStorage<4, 4, int>                                                   mTextureRefCount;
    ::ll::TypedStorage<1, 1, bool>                                                  mPrimaryClientUnloaded;
    ::ll::TypedStorage<1, 1, bool>                                                  mPendingRecreateCubemap;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                 mHDRTexturesUnavailable;
    ::ll::TypedStorage<4, 4, ::CubemapBackgroundResources::CubemapType>             mCubemapType;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                         mFadeInColor;
    // NOLINTEND

public:
    // prevent constructor by default
    CubemapBackgroundResources();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CubemapBackgroundResources() /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CubemapBackgroundResources(
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup,
        ::ResourcePackManager&                           resourcePackManager,
        ::CubemapBackgroundResources::CubemapType const& cubemapType
    );

    MCAPI void _checkHDRTexturesAvailableAndFallback(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _unloadPanoramaTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _updateIsVanillaCubemap();

    MCAPI void loadAssets(
        ::mce::TextureResourceService&         textureResourceService,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup
    );

    MCAPI void unloadAssets(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void updateAssets(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void updateCubemapType(
        ::CubemapBackgroundResources::CubemapType const& cubemapType,
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup,
        ::ResourcePackManager&                           resourcePackManager,
        ::CubemapBackgroundResources::CubemapType const& cubemapType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForResourcePackListener();
    // NOLINTEND
};
