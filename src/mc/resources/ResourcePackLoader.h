#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoaderBase.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/resource_processing/category/CategoryMergeStrategy.h"
#include "mc/platform/brstd/function_ref.h"

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
        ::ll::UntypedStorage<8, 16>  mUnka2e56b;
        ::ll::UntypedStorage<8, 136> mUnk511682;
        ::ll::UntypedStorage<2, 4>   mUnkdb630c;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadAllVersionsOptions& operator=(LoadAllVersionsOptions const&);
        LoadAllVersionsOptions(LoadAllVersionsOptions const&);
        LoadAllVersionsOptions();
    };

    struct ResourcePackLoaderArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkcfd81d;
        ::ll::UntypedStorage<8, 64> mUnkd1b0df;
        ::ll::UntypedStorage<8, 64> mUnk128638;
        ::ll::UntypedStorage<8, 64> mUnkbfaf0b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourcePackLoaderArgs& operator=(ResourcePackLoaderArgs const&);
        ResourcePackLoaderArgs(ResourcePackLoaderArgs const&);
        ResourcePackLoaderArgs();

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
    ::ll::UntypedStorage<8, 8>  mUnkf914db;
    ::ll::UntypedStorage<8, 16> mUnk86cf50;
    ::ll::UntypedStorage<8, 64> mUnkea7f9a;
    ::ll::UntypedStorage<8, 64> mUnkfb1985;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackLoader& operator=(ResourcePackLoader const&);
    ResourcePackLoader(ResourcePackLoader const&);
    ResourcePackLoader();

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

    MCNAPI bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI bool $hasCapability(::std::string_view requiredCapability) const;

#ifdef LL_PLAT_C
    MCNAPI ::mce::Image $loadTexture(::ResourceLocation const& resourceLocation) const;
#endif


    // NOLINTEND
};
