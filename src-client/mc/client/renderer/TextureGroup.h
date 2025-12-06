#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ImageCacheMode.h"
#include "mc/client/renderer/TextureLoadMode.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/TextureGroupBase.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class ResourceLocation;
struct BedrockTextureData;
struct IAdvancedGraphicsOptions;
struct ResourceLoadManager;
struct ResourceLocationPair;
namespace cg { struct ImageBuffer; }
namespace cg { struct TextureSetDefinition; }
namespace mce { class TextureContainer; }
namespace mce { class TexturePtr; }
namespace mce { struct ImageResourceLoader; }
namespace mce { struct TextureResourceService; }
// clang-format on

namespace mce {

class TextureGroup : public ::Bedrock::EnableNonOwnerReferences, public ::mce::TextureGroupBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk668155;
    ::ll::UntypedStorage<8, 352> mUnkbe5286;
    ::ll::UntypedStorage<8, 16>  mUnkb1ab7a;
    ::ll::UntypedStorage<8, 24>  mUnk4c0a9a;
    ::ll::UntypedStorage<8, 8>   mUnk12f9f3;
    ::ll::UntypedStorage<8, 48>  mUnk7e652d;
    ::ll::UntypedStorage<8, 16>  mUnkcea42e;
    ::ll::UntypedStorage<8, 8>   mUnkae8ab9;
    ::ll::UntypedStorage<8, 16>  mUnkaf05f8;
    ::ll::UntypedStorage<8, 16>  mUnkb50c73;
    ::ll::UntypedStorage<8, 8>   mUnk415b23;
    ::ll::UntypedStorage<8, 16>  mUnkc6d298;
    ::ll::UntypedStorage<8, 16>  mUnk1ee740;
    ::ll::UntypedStorage<8, 16>  mUnk71fac1;
    ::ll::UntypedStorage<8, 8>   mUnk68a097;
    ::ll::UntypedStorage<8, 8>   mUnke9a27f;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroup& operator=(TextureGroup const&);
    TextureGroup(TextureGroup const&);
    TextureGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextureGroup() /*override*/;

    // vIndex: 1
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
    MCNAPI TextureGroup(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService
    );

    MCNAPI TextureGroup(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService,
        ::std::shared_ptr<::mce::ImageResourceLoader>             imageResourceLoader
    );

    MCNAPI void _loadTextureAsyncUrgentlyIfTouched(
        ::std::pair<::ResourceLocation, ::TextureLoadMode> const& textureLoadKey,
        ::std::optional<::ResourceLoadType>                       optionalLoadType
    );

    MCNAPI void _loadTexturesAsync(
        ::gsl::span<::ResourceLocationPair> locationPairs,
        ::std::optional<::ResourceLoadType> resourceLoadType
    );

    MCNAPI void _loadTexturesSync(::gsl::span<::ResourceLocation> locations);

    MCNAPI bool _textureIsQueuedOrBeingLoaded(::std::pair<::ResourceLocation, ::TextureLoadMode> const& textureLoadKey);

    MCNAPI void _unloadBedrockTextureAndCachedImage(
        ::ResourceLocation const& cachedResourceLocation,
        ::BedrockTexture&         bedrockTexture
    );

    MCNAPI void _unloadFileSystem(::ResourceFileSystem fileSystem);

    MCNAPI void addEmptyTexture(::ResourceLocation const& resourceLocation, int width, int height);

    MCNAPI uint64 estimateMemoryUsage() const;

    MCNAPI ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::cg::ImageBuffer* getCachedImageOrLoadAsync(::ResourceLocation const& imageToLoad);

    MCNAPI ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const& resourceLocation, bool forceReload);

    MCNAPI bool isLoaded(
        ::ResourceLocation const& resourceLocation,
        bool                      ignoreCreation,
        ::cg::TextureSetLayerType textureType
    ) const;

    MCNAPI ::nonstd::expected<void, ::std::error_condition>
    loadImageSyncAndInsertIntoCache(::ResourceLocation const& resourceLocation, bool splitAsArray);

    MCNAPI ::Bedrock::Threading::Async<void> loadTextureAsync(
        ::ResourceLocation const&           resourceLocation,
        ::TextureLoadMode                   textureLoadMode,
        ::std::optional<::ResourceLoadType> resourceLoadType,
        ::std::optional<uint>               optLoadOrder
    );

    MCNAPI void
    loadTexturesAsync(::gsl::span<::ResourceLocation> locations, ::std::optional<::ResourceLoadType> resourceLoadType);

    MCNAPI void reloadAllTextures();

    MCNAPI void reloadImages(
        ::gsl::span<::ResourceLocationPair> imagesToLoadAsync,
        ::gsl::span<::ResourceLocation>     imagesToImmediatelyLoad,
        ::std::vector<::ResourceLocation>   texturesToKeep,
        ::ImageCacheMode
    );

    MCNAPI bool shouldLoadPBRResources() const;

    MCNAPI void unloadAllTextures();

    MCNAPI ::BedrockTexture& uploadTexture(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer imageBuffer);

    MCNAPI ::BedrockTexture& uploadTexture(
        ::ResourceLocation const&                                      resourceLocation,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition
    );

    MCNAPI ::BedrockTexture& uploadTexture(
        ::ResourceLocation const& resourceLocation,
        ::mce::TextureContainer&& textureContainer,
        ::std::string_view        optionalIdentifier
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService
    );

    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> advancedGraphicsOptions,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>      resourceLoadManager,
        ::mce::TextureResourceService&                            textureResourceService,
        ::std::shared_ptr<::mce::ImageResourceLoader>             imageResourceLoader
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::TexturePtr $getTexture(
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
