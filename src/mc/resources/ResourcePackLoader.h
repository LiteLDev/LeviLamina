#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoaderBase.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/resource_processing/category/CategoryFileMapping.h"
#include "mc/deps/resource_processing/category/CategoryMergeStrategy.h"
#include "mc/deps/resource_processing/category/CategoryMergeStrategyFactory.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/ResourceMergeOptions.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class LoadedResourceData;
class PackInstance;
class ResourceGroup;
class ResourceLocation;
class ResourceLocationPair;
class ResourcePackMergeStrategy;
class ResourcePackStack;
struct PackIdVersion;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { class UUID; }
namespace mce { struct Image; }
// clang-format on

class ResourcePackLoader : public ::ResourceLoaderBase {
public:
    // ResourcePackLoader inner types declare
    // clang-format off
    struct ConstructorKey;
    struct LoadAllVersionsOptions;
    struct ResourcePackLoaderArgs;
    // clang-format on

    // ResourcePackLoader inner types define
    struct ConstructorKey {};

    struct LoadAllVersionsOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::brstd::function_ref<bool(::PackInstance const&)>>     packInstanceFilter;
        ::ll::TypedStorage<8, 136, ::std::optional<::ResourceMergeOptions>>               mergeOptions;
        ::ll::TypedStorage<2, 4, ::std::optional<::Bedrock::Resources::ResourceCategory>> loadAsCategory;
        // NOLINTEND
    };

    struct ResourcePackLoaderArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                stack;
        ::ll::TypedStorage<8, 64, ::std::function<::Core::PathBuffer<::std::string>()>> getPath;
        ::ll::TypedStorage<
            8,
            64,
            ::Bedrock::Resources::CategoryMergeStrategyFactory<::LoadedResourceData, ::ResourceMergeOptions>>
                                                                             mergeStrategyFactory;
        ::ll::TypedStorage<8, 64, ::Bedrock::Resources::CategoryFileMapping> categoryFileMapping;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~ResourcePackLoaderArgs();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>     mFullStack;
    ::ll::TypedStorage<8, 16, ::WeakRef<::ResourcePackLoader>>           mWeakThis;
    ::ll::TypedStorage<8, 64, ::Bedrock::Resources::CategoryFileMapping> mCategoryFileMapping;
    ::ll::TypedStorage<
        8,
        64,
        ::Bedrock::Resources::CategoryMergeStrategyFactory<::LoadedResourceData, ::ResourceMergeOptions>>
        mMergeStrategyFactory;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourcePackLoader();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackLoader() /*override*/ = default;

    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;

    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

#ifdef LL_PLAT_C
    virtual ::mce::Image loadTexture(::ResourceLocation const& resourceLocation) const /*override*/;

#endif
    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual bool hasCapability(::std::string_view requiredCapability) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ResourcePackLoader(::ResourcePackLoader::ConstructorKey, ::ResourcePackLoader::ResourcePackLoaderArgs args);

    MCNAPI ::std::optional<::Bedrock::Resources::CategoryMergeStrategy<::LoadedResourceData>> _loadIntoStrategy(
        ::ResourceLocation const&                    resourceLocation,
        ::ResourcePackLoader::LoadAllVersionsOptions options
    ) const;

    MCNAPI ::std::vector<::ResourceLocationPair> findAllTexturesInUse() const;

    MCNAPI ::std::vector<::PackIdVersion> findInPacks(::ResourceLocation const& resourceLocation) const;
#endif

    MCNAPI ::std::vector<::PackInstance> getPacksWhereAssetExtractionNotViable(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;

    MCNAPI ::ResourceGroup getResourcesOfGroup(::std::string const& group) const;

    MCNAPI ::ResourceGroup getResourcesOfGroup(::PackInstance const& packInstance, ::std::string const& group) const;

#ifdef LL_PLAT_C
    MCNAPI ::std::optional<::StreamableAssetSource> getStreamableSource(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensionList,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;
#endif

    MCNAPI bool isAssetExtractionViableForFullStack(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;

#ifdef LL_PLAT_C
    MCNAPI bool load(
        ::ResourceLocation const&    resourceLocation,
        ::std::string&               resourceStream,
        ::std::optional<::mce::UUID> packId
    ) const;

    MCNAPI bool loadAllVersionsOf(
        ::ResourceLocation const&                          resourceLocation,
        ::brstd::function_ref<bool(::PackInstance const&)> packInstanceFilter,
        ::ResourcePackMergeStrategy&                       mergeStrategy
    ) const;

    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _alwaysPassingPackFilter(::PackInstance const&);

#ifdef LL_PLAT_C
    MCNAPI static bool _hasResource(
        ::ResourcePackStack const&       resourcePackStack,
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    );

    MCNAPI static ::OwnerPtr<::ResourcePackLoader> create(::ResourcePackLoader::ResourcePackLoaderArgs args);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ResourcePackLoader::ConstructorKey, ::ResourcePackLoader::ResourcePackLoaderArgs args);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCNAPI bool $load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;

    MCAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI bool $hasCapability(::std::string_view requiredCapability) const;

#ifdef LL_PLAT_C
    MCNAPI ::mce::Image $loadTexture(::ResourceLocation const& resourceLocation) const;
#endif


    // NOLINTEND
};
