#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IResourceWatcher.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/client/renderer/texture/TextureHotReloaderMode.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/ResourceLoader.h"

// auto generated forward declare list
// clang-format off
class IResourceLocationExpander;
class TextureAtlas;
struct ImageResourceManager;
struct StbImageLoadPolicy;
struct StdIoStreamPolicy;
struct TextureAtlasResourceCallbacks;
namespace cg { class ImageBuffer; }
namespace cg { class TextureSetImageContainer; }
namespace mce { class FileWatcherHandle; }
namespace mce { class TextureGroup; }
namespace mce { struct Image; }
// clang-format on

struct TextureHotReloader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureHotReloader inner types define
    using StatusCallbackType = void(::TextureAtlasStatus const&);

    using ReloadCallbackType = void(::ResourceLocation const&);

    using TextureAtlasTaskEnqueueType = void(::TextureAtlasResourceCallbacks);

    using TextureAtlasReloadCallbackType = void(
        ::ResourceLocation const&,
        ::std::shared_ptr<::cg::ImageBuffer>,
        ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
    );

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::map<::ResourceLocation, ::cg::ImageBuffer>>> mCachedTextures;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::mce::IResourceWatcher<
            ::cg::ResourceLoader<
                ::std::shared_ptr<::mce::Image>,
                ::ResourceLocation,
                ::StdIoStreamPolicy,
                ::StbImageLoadPolicy,
                ::std::vector<uchar>>,
            ::ImageResourceManager>>>
                                                                                                  mImageWatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ImageResourceManager>>                           mImageResourceManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ResourceLocation, ::mce::FileWatcherHandle>> mFileWatcherHandles;
    ::ll::TypedStorage<4, 4, ::TextureHotReloaderMode const>                                      mMode;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureHotReloader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureHotReloader(
        ::std::unique_ptr<::mce::IResourceWatcher<
            ::cg::ResourceLoader<
                ::std::shared_ptr<::mce::Image>,
                ::ResourceLocation,
                ::StdIoStreamPolicy,
                ::StbImageLoadPolicy,
                ::std::vector<uchar>>,
            ::ImageResourceManager>> imageWatcher,
        ::TextureHotReloaderMode     mode
    );

    MCAPI void cacheTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI bool
    isFileWatched(::ResourceLocation const& resloc, ::IResourceLocationExpander const& resourceLocationExpander);

    MCAPI void loadCachedTextureData(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void registerAtlas(
        ::TextureAtlas&                                        textureAtlas,
        ::std::shared_ptr<::mce::TextureGroup>                 textureGroup,
        ::IResourceLocationExpander const&                     resourceLocationExpander,
        ::cg::MipMapSupport const&                             mipMapSupport,
        ::std::function<void(::TextureAtlasResourceCallbacks)> textureAtlasTaskEnqueueCallback,
        ::std::function<void(::TextureAtlasStatus const&)>     textureAtlasStatusCallback,
        ::std::function<void(
            ::ResourceLocation const&,
            ::std::shared_ptr<::cg::ImageBuffer>,
            ::std::shared_ptr<::std::unordered_map<::ResourceLocation, ::cg::TextureSetImageContainer>>
        )>                                                     textureAtlasReloadCallback
    );

    MCAPI void registerTexture(
        ::ResourceLocation const&                        resLoc,
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup,
        ::IResourceLocationExpander const&               resourceLocationExpander,
        ::std::function<void(::ResourceLocation const&)> textureReloadCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::mce::IResourceWatcher<
            ::cg::ResourceLoader<
                ::std::shared_ptr<::mce::Image>,
                ::ResourceLocation,
                ::StdIoStreamPolicy,
                ::StbImageLoadPolicy,
                ::std::vector<uchar>>,
            ::ImageResourceManager>> imageWatcher,
        ::TextureHotReloaderMode     mode
    );
    // NOLINTEND
};
