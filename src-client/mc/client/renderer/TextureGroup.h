#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/AsyncCachedTextureLoader.h"
#include "mc/client/renderer/ImageBufferResourceManager.h"
#include "mc/client/renderer/ImageCacheMode.h"
#include "mc/client/renderer/TextureLoadMode.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/CountTracker.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/TextureGroupBase.h"
#include "mc/resources/ResourceLoadType.h"
#include "mc/util/texture_set_helpers/TextureSetDefinitionLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class IAdvancedGraphicsOptions;
class ResourceLoadManager;
class ResourceLocation;
class ResourceLocationPair;
struct BedrockTextureData;
namespace cg { class TextureSetDefinition; }
namespace mce { class ImageResourceLoader; }
namespace mce { class TextureContainer; }
namespace mce { class TexturePtr; }
namespace mce { struct LRUCache; }
namespace mce { struct TextureResourceService; }
// clang-format on

namespace mce {

class TextureGroup : public ::Bedrock::EnableNonOwnerReferences, public ::mce::TextureGroupBase {
public:
    // TextureGroup inner types define
    using LoadResult = ::Bedrock::Threading::Async<void>;

    using TextureMap = ::std::map<::ResourceLocation, ::BedrockTexture>;

    using TextureLoadKey = ::std::pair<::ResourceLocation, ::TextureLoadMode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 352, ::AsyncCachedTextureLoader>                               mAsyncTextureLoader;
    ::ll::TypedStorage<8, 16, ::std::map<::ResourceLocation, ::BedrockTexture>>          mLoadedTextures;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>      mResourceLoadManager;
    ::ll::TypedStorage<8, 8, ::mce::TextureResourceService&>                             mResourceService;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer const>                                   mMissingTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::ImageResourceLoader>>             mImageResourceLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextureSetHelpers::TextureSetDefinitionLoader::ResourceHelper>>
                                                                                     mTextureSetResourceHelper;
    ::ll::TypedStorage<8, 16, ::std::map<::ResourceLocation, ::std::optional<uint>>> mTouchedTextures;
    ::ll::TypedStorage<8, 16, ::ImageBufferResourceManager>                          mImageBufferCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::LRUCache>>                     mLRUCache;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::pair<::ResourceLocation, ::TextureLoadMode>, ::Bedrock::Threading::SharedAsync<void>>>
                                                                  mLoadQueueResults;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>  mQueueLoadResultCoroutine;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker> mPendingLoadTaskCounter;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>               mOutstandingTaskMemory;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>               mOutstandingTaskCount;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroup& operator=(TextureGroup const&);
    TextureGroup(TextureGroup const&);
    TextureGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureGroup() /*override*/;

    virtual ::mce::TexturePtr getTexture(
        ::ResourceLocation const&       resourceLocation,
        bool const                      forceReload,
        ::std::optional<uint>           optLoadOrder,
        ::cg::TextureSetLayerType const textureType
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureGroup(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService
    );

    MCAPI TextureGroup(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService,
        ::std::shared_ptr<::mce::ImageResourceLoader>             imageResourceLoader
    );

    MCAPI void _loadTextureAsyncUrgentlyIfTouched(
        ::std::pair<::ResourceLocation, ::TextureLoadMode> const& textureLoadKey,
        ::std::optional<::ResourceLoadType>                       optionalLoadType
    );

    MCAPI void _loadTexturesSync(::gsl::span<::ResourceLocation> locations);

    MCAPI bool _textureIsQueuedOrBeingLoaded(::std::pair<::ResourceLocation, ::TextureLoadMode> const& textureLoadKey);

    MCAPI void addEmptyTexture(::ResourceLocation const& resourceLocation, int width, int height);

    MCAPI ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const& resourceLocation) const;

    MCAPI ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) const;

    MCAPI ::cg::ImageBuffer* getCachedImageOrLoadAsync(::ResourceLocation const& imageToLoad);

    MCAPI ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const& resourceLocation, bool forceReload);

    MCAPI ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer);

    MCAPI bool isLoaded(
        ::ResourceLocation const& resourceLocation,
        bool                      ignoreCreation,
        ::cg::TextureSetLayerType textureType
    ) const;

    MCAPI ::nonstd::expected<void, ::std::error_condition>
    loadImageSyncAndInsertIntoCache(::ResourceLocation const& resourceLocation, bool splitAsArray);

    MCAPI ::Bedrock::Threading::Async<void> loadTextureAsync(
        ::ResourceLocation const&           resourceLocation,
        ::TextureLoadMode                   textureLoadMode,
        ::std::optional<::ResourceLoadType> resourceLoadType,
        ::std::optional<uint>               optLoadOrder
    );

    MCAPI void
    loadTexturesAsync(::gsl::span<::ResourceLocation> locations, ::std::optional<::ResourceLoadType> resourceLoadType);

    MCAPI void reloadAllTextures();

    MCAPI void reloadImages(
        ::gsl::span<::ResourceLocationPair> imagesToLoadAsync,
        ::gsl::span<::ResourceLocation>     imagesToImmediatelyLoad,
        ::std::vector<::ResourceLocation>   texturesToKeep,
        ::ImageCacheMode
    );

    MCAPI bool shouldLoadPBRResources() const;

    MCAPI void unloadAllTextures();

    MCAPI bool unloadTexture(::ResourceLocation const& resourceLocation, bool assertOnFailure);

    MCAPI ::BedrockTexture& uploadTexture(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer imageBuffer);

    MCAPI ::BedrockTexture& uploadTexture(
        ::ResourceLocation const&                                      resourceLocation,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition
    );

    MCAPI ::BedrockTexture& uploadTexture(
        ::ResourceLocation const& resourceLocation,
        ::mce::TextureContainer&& textureContainer,
        ::std::string_view        optionalIdentifier
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService,
        ::std::shared_ptr<::mce::ImageResourceLoader>             imageResourceLoader
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
    MCAPI ::mce::TexturePtr $getTexture(
        ::ResourceLocation const&       resourceLocation,
        bool const                      forceReload,
        ::std::optional<uint>           optLoadOrder,
        ::cg::TextureSetLayerType const textureType
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForTextureGroupBase();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace mce
