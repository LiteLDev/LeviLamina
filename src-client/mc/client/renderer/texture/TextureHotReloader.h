#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IResourceWatcher.h"
#include "mc/client/renderer/texture/TextureAtlasStatus.h"
#include "mc/client/renderer/texture/TextureHotReloaderMode.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/ResourceLoader.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class TextureAtlas;
struct IResourceLocationExpander;
struct ImageResourceManager;
struct StbImageLoadPolicy;
struct StdIoStreamPolicy;
struct TextureAtlasResourceCallbacks;
namespace cg { class ImageBuffer; }
namespace cg { class TextureSetImageContainer; }
namespace mce { class TextureGroup; }
namespace mce { struct Image; }
// clang-format on

struct TextureHotReloader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9bbd1d;
    ::ll::UntypedStorage<8, 8>  mUnk156b49;
    ::ll::UntypedStorage<8, 8>  mUnk74544c;
    ::ll::UntypedStorage<8, 64> mUnk2fb49e;
    ::ll::UntypedStorage<4, 4>  mUnke5c57f;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureHotReloader& operator=(TextureHotReloader const&);
    TextureHotReloader(TextureHotReloader const&);
    TextureHotReloader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureHotReloader() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureHotReloader(
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

    MCNAPI void cacheTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI bool
    isFileWatched(::ResourceLocation const& resloc, ::IResourceLocationExpander const& resourceLocationExpander);

    MCNAPI void loadCachedTextureData(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void registerAtlas(
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

    MCNAPI void registerTexture(
        ::ResourceLocation const&                        resLoc,
        ::std::shared_ptr<::mce::TextureGroup>           textureGroup,
        ::IResourceLocationExpander const&               resourceLocationExpander,
        ::std::function<void(::ResourceLocation const&)> textureReloadCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
