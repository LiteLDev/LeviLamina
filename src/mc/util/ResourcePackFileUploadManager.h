#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ResourceLocation;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core::ZipUtils { class IZipUtility; }
namespace Json { class Value; }
namespace ResourcePackPathLifetimeHelpers { class ResourcePackPathCache; }
namespace ResourcePackPathLifetimeHelpers { class ScopeDestroyedPath; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>> mAppPlatform;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::shared_ptr<::ResourcePackPathLifetimeHelpers::ScopeDestroyedPath const>>>
                                                                                        mZipPaths;
    ::ll::TypedStorage<8, 8, ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&> mResourcePackPathCache;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>>>>
                                                                                                mPreviousUpload;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Core::ZipUtils::IZipUtility>>> mZipUtility;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    ) /*override*/;

    virtual void
    uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex) /*override*/;

    virtual ~ResourcePackFileUploadManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addZipPath(::Core::PathBuffer<::std::string> const& resourceZipPath);

    MCAPI void _archiveAndUploadPackToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int                  slotIndex,
        ::std::string const&
    );

    MCAPI ::Bedrock::Threading::Async<void> _extractPackFromZipAndUpload(
        ::std::string const&                     resourcePack,
        ::ResourceLocation const&                resourcePackLocation,
        ::Core::PathBuffer<::std::string> const& relativePathWithinZip,
        ::Core::PathBuffer<::std::string> const& resourceZipPath,
        ::Json::Value const&                     uploadOptions
    );

    MCAPI bool _unzipEmbeddedResourcePackForUpload(
        ::ResourceLocation const&                resourcePackLocation,
        ::Core::PathBuffer<::std::string> const& relativePathWithinZip,
        ::Core::PathView                         outputPath
    );

    MCAPI ::Bedrock::Threading::Async<void> _uploadResourcePackFolder(
        ::std::string const&                     resourcePack,
        ::ResourceLocation const&                resourcePackLocation,
        ::Core::PathBuffer<::std::string> const& resourceZipPath,
        ::Json::Value const&                     uploadOptions
    );

    MCAPI bool _zipResourcePackForUpload(
        ::ResourceLocation const&                resourcePackLocation,
        ::Core::PathBuffer<::std::string> const& resourceZipPath
    );

    MCAPI ::Bedrock::Threading::Async<void> uploadResourcePack(
        ::std::string const&                     resourcePackName,
        ::ResourceLocation const&                resourceLocation,
        bool                                     isZipped,
        ::Core::PathBuffer<::std::string> const& relativePathWithinZip,
        bool                                     isPremium,
        ::PackType                               packType
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
    MCAPI void $archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    );

    MCAPI void $uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
