#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackIconType.h"
#include "mc/resources/ResourceSignature.h"

// auto generated forward declare list
// clang-format off
class I18n;
class Pack;
class PackAccessStrategy;
struct BehaviorPackContents;
struct ResourcePackContents;
struct StreamableAssetSource;
struct SubpackInfo;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Json { class Value; }
// clang-format on

class ResourcePack {
public:
    // ResourcePack inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // ResourcePack inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                              mHidden;
        ::ll::TypedStorage<1, 1, bool>                                              mError;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Pack>>>       mPack;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>           mSubpackAccessStrategy;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Pack>>>         mSubPacks;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ResourcePack>>> mSubResourcePacks;
        ::ll::TypedStorage<8, 32, ::std::string const>                              mNameWithVersionForTelemetry;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mIconPath;
        ::ll::TypedStorage<8, 8, double>                                            mLoadTime;
        ::ll::TypedStorage<1, 1, bool>                                              mIsBaseGamePack;
        ::ll::TypedStorage<1, 1, bool>                                              mIsSlicePack;
        ::ll::TypedStorage<8, 64, ::ResourceSignature>                              mResourceSignature;
        ::ll::TypedStorage<1, 1, bool>                                              mIsMarkedForRemoval;
        ::ll::TypedStorage<8, 8, ::std::atomic<double>>                             mAssetReadMs;
        ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                             mAssetReadBytes;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using Callback = ::std::function<void(::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ResourcePack::Impl>>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePack(::I18n& loc, ::gsl::not_null<::std::shared_ptr<::Pack>> pack);

    MCNAPI void _createSubpack(::I18n& loc, ::SubpackInfo const& subpackInfo);

    MCNAPI void _createSubpacks(::I18n& loc);

#ifdef LL_PLAT_C
    MCNAPI void _gatherBehaviorPackTelemetry(::BehaviorPackContents& counts) const;

    MCNAPI void _gatherResourcePackTelemetry(::ResourcePackContents& counts) const;
#endif

    MCNAPI bool areKnownFilesValid();

    MCAPI void forEachIn(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex,
        bool                                       recurseAnyways
    ) const;

    MCNAPI void forEachInAssetSet(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex
    ) const;

    MCNAPI void generateAssetSet();

#ifdef LL_PLAT_C
    MCNAPI ::Core::PathBuffer<::std::string> getIconPath(::PackIconType iconType) const;
#endif

    MCAPI bool getResource(::Core::PathView const& resourceName, ::std::string& resourceStream, int subpackIndex) const;

#ifdef LL_PLAT_C
    MCNAPI ::std::optional<::StreamableAssetSource> getStreamableSource(
        ::Core::Path const&               resourceName,
        int                               subpackIndex,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;

    MCNAPI ::Json::Value getTexturesList(int subpackIndex) const;

    MCNAPI bool hasExtraResourcesForLocale(::std::string const& code, int subpackIndex) const;
#endif

    MCNAPI bool hasResource(::Core::PathView const& resourceName, int subpackIndex) const;

#ifdef LL_PLAT_C
    MCNAPI void invalidatePreloadCache();
#endif

    MCNAPI bool isAssetExtractionViable() const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle
    preloadArchive(::Core::Path const& packRelativePath, int subpackIndex) const;

    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath, int subpackIndex, bool) const;

#ifdef LL_PLAT_C
    MCNAPI void regenerateAssetSet();

    MCNAPI void resumeFallbackCache();
#endif

    MCNAPI void setLocale(::std::string const& code);

#ifdef LL_PLAT_C
    MCNAPI void suspendFallbackCache();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_BUG_ICON_PATH();

    MCNAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_ICON_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::I18n& loc, ::gsl::not_null<::std::shared_ptr<::Pack>> pack);
    // NOLINTEND
};
