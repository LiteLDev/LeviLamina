#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
class IFileChunkUploader;
class ResourceLocation;
class TaskGroup;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfb19b9;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackFileUploadManager() /*override*/ = default;

    // vIndex: 2
    virtual void archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    ) /*override*/;

    // vIndex: 3
    virtual void
    uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackFileUploadManager(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);

    MCNAPI void
    _archiveAndUploadPackToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int slotIndex, ::std::string const&);

    MCNAPI void _extractPackFromZipAndUpload(
        ::std::string const&                     resourcePack,
        ::ResourceLocation const&                resourcePackLocation,
        ::Core::PathBuffer<::std::string> const& relativePathWithinZip,
        ::Core::PathBuffer<::std::string> const& resourceZipPath,
        ::Json::Value const&                     uploadOptions
    );

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> _uploadResourcePackFolder(
        ::std::string const&                     resourcePack,
        ::ResourceLocation const&                resourcePackLocation,
        ::Core::PathBuffer<::std::string> const& resourceZipPath,
        ::Json::Value const&                     uploadOptions
    );

    MCNAPI void uploadResourcePack(
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
    MCNAPI void* $ctor(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    );

    MCNAPI void $uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
