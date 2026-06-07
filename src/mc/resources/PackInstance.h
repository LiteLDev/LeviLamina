#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/resources/PackIconType.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/PackStats.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
class PackManifest;
class PackSettings;
class ResourceLocation;
class ResourcePack;
class SemVersion;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {
public:
    // PackInstance inner types define
    using Callback = ::std::function<void(::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, ::PackReport>                                      mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                                     mPackSettings;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ResourcePack>>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                        mStats;
    ::ll::TypedStorage<4, 4, int>                                                 mSubpackIndex;
    ::ll::TypedStorage<1, 1, uchar>                                               mRevision;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstance(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        int                                                subpackIndex,
        bool                                               packSettings,
        ::PackSettings*
    );

    MCAPI PackInstance(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        ::std::string const&                               subpackName,
        bool                                               packSettings,
        ::PackSettings*
    );

    MCAPI void
    forEachIn(::Core::Path const& path, ::std::function<void(::Core::Path const&)> callback, bool recurseAnyways) const;

#ifdef LL_PLAT_C
    MCAPI void generateAssetSet();
#endif

    MCAPI uint getFileCount() const;

    MCAPI ::std::string const& getFolderName() const;

#ifdef LL_PLAT_C
    MCAPI ::ResourceFileSystem getIconFileSytem() const;

    MCAPI ::Core::PathBuffer<::std::string> getIconPath(::PackIconType iconType) const;

    MCAPI ::Core::PathBuffer<::std::string> const& getIconZipPath() const;
#endif

    MCAPI double getLoadTime() const;

    MCAPI ::PackManifest const& getManifest() const;

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::mce::UUID const getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCFOLD ::PackSettings const* getPackSettings() const;

    MCFOLD ::PackStats const& getPackStats() const;

    MCFOLD ::PackStats& getPackStats();

    MCAPI ::Core::PathBuffer<::std::string> const& getRelativePathWithinZip() const;

    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream) const;

    MCAPI ::ResourceLocation const& getResourceLocation() const;

#ifdef LL_PLAT_C
    MCAPI int getSubpackCount() const;
#endif

    MCAPI ::std::string const& getSubpackFolderName() const;

#ifdef LL_PLAT_C
    MCFOLD int getSubpackIndex() const;
#endif

    MCAPI ::ContentTierInfo getTierInfo() const;

    MCAPI ::SemVersion const& getVersion() const;

#ifdef LL_PLAT_C
    MCAPI bool hasIcon(::PackIconType iconType) const;
#endif

    MCAPI bool hasResource(::Core::Path const& resourceName) const;

    MCAPI bool isBaseGamePack() const;

    MCAPI bool isSlicePack() const;

    MCAPI bool isTrusted() const;

#ifdef LL_PLAT_C
    MCAPI bool isType(::PackType packType) const;
#endif

    MCAPI bool isZipped() const;

    MCAPI ::Bedrock::Resources::PreloadedPathHandle preloadArchive(::Core::Path const& packRelativePath) const;

    MCAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath) const;

    MCAPI ~PackInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        int                                                subpackIndex,
        bool                                               packSettings,
        ::PackSettings*
    );

    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        ::std::string const&                               subpackName,
        bool                                               packSettings,
        ::PackSettings*
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
