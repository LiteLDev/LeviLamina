#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackIconType.h"

// auto generated forward declare list
// clang-format off
class I18n;
class Pack;
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
        ::ll::UntypedStorage<1, 1>  mUnkb8cf7e;
        ::ll::UntypedStorage<1, 1>  mUnkd06044;
        ::ll::UntypedStorage<8, 16> mUnk4b385f;
        ::ll::UntypedStorage<8, 8>  mUnk75183a;
        ::ll::UntypedStorage<8, 24> mUnk18bd2a;
        ::ll::UntypedStorage<8, 24> mUnkf245c7;
        ::ll::UntypedStorage<8, 32> mUnk42ef5f;
        ::ll::UntypedStorage<8, 32> mUnkabb7e0;
        ::ll::UntypedStorage<8, 8>  mUnke53f85;
        ::ll::UntypedStorage<1, 1>  mUnkc7f91b;
        ::ll::UntypedStorage<1, 1>  mUnkb2f73c;
        ::ll::UntypedStorage<8, 64> mUnk89c0cf;
        ::ll::UntypedStorage<1, 1>  mUnkc71760;
        ::ll::UntypedStorage<8, 8>  mUnk22a855;
        ::ll::UntypedStorage<8, 8>  mUnk5be703;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

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
    MCAPI ResourcePack(::I18n& loc, ::gsl::not_null<::std::shared_ptr<::Pack>> pack);

    MCAPI void _createSubpack(::I18n& loc, ::SubpackInfo const& subpackInfo);

    MCAPI void _createSubpacks(::I18n& loc);

#ifdef LL_PLAT_C
    MCAPI void _gatherBehaviorPackTelemetry(::BehaviorPackContents& counts) const;

    MCAPI void _gatherResourcePackTelemetry(::ResourcePackContents& counts) const;
#endif

    MCAPI bool areKnownFilesValid();

    MCAPI void forEachIn(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex,
        bool                                       recurseAnyways
    ) const;

    MCAPI void forEachInAssetSet(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex
    ) const;

    MCAPI void generateAssetSet();

#ifdef LL_PLAT_C
    MCAPI ::Core::PathBuffer<::std::string> getIconPath(::PackIconType iconType) const;
#endif

    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream, int subpackIndex) const;

#ifdef LL_PLAT_C
    MCAPI ::std::optional<::StreamableAssetSource> getStreamableSource(
        ::Core::Path const&               resourceName,
        int                               subpackIndex,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;

    MCAPI ::Json::Value getTexturesList(int subpackIndex) const;

    MCAPI bool hasExtraResourcesForLocale(::std::string const& code, int subpackIndex) const;

    MCAPI bool hasIcon(::PackIconType iconType) const;
#endif

    MCAPI bool hasResource(::Core::Path const& resourceName, int subpackIndex) const;

#ifdef LL_PLAT_C
    MCAPI void invalidatePreloadCache();
#endif

    MCAPI bool isAssetExtractionViable() const;

    MCAPI ::Bedrock::Resources::PreloadedPathHandle
    preloadArchive(::Core::Path const& packRelativePath, int subpackIndex) const;

    MCAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath, int subpackIndex, bool) const;

#ifdef LL_PLAT_C
    MCAPI void regenerateAssetSet();

    MCAPI void resumeFallbackCache();
#endif

    MCAPI void setLocale(::std::string const& code);

#ifdef LL_PLAT_C
    MCAPI void suspendFallbackCache();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_BUG_ICON_PATH();

    MCAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_ICON_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::I18n& loc, ::gsl::not_null<::std::shared_ptr<::Pack>> pack);
    // NOLINTEND
};
