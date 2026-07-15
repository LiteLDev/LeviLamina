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
class FileArchiver;
class IFileChunkUploader;
class ResourceLocation;
class TaskGroup;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
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
        ::std::string const&,
        ::Core::Path const&,
        int const,
        ::std::string const&
    ) /*override*/;

    virtual void
    uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackFileUploadManager(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
    );

#ifdef LL_PLAT_C
    MCAPI ResourcePackFileUploadManager(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const&       FileArchiver,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
    );
#endif

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
    );

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>               appPlatform,
        ::TaskGroup&                                               taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>                    fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const&       FileArchiver,
        ::std::unique_ptr<::Core::ZipUtils::IZipUtility>&&         zipUtility,
        ::std::shared_ptr<::Bedrock::Threading::SharedAsync<void>> previousUpload,
        ::ResourcePackPathLifetimeHelpers::ResourcePackPathCache&  resourcePackPathCache
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
