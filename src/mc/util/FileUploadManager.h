#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/FileInfo.h"
#include "mc/util/UploadError.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class IFileChunkUploader;
class IFilePicker;
class TaskGroup;
struct FileChunkInfo;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FileUploadManager : public ::std::enable_shared_from_this<::FileUploadManager> {
public:
    // FileUploadManager inner types declare
    // clang-format off
    struct MultiPartStreamHelper;
    // clang-format on

    // FileUploadManager inner types define
    struct MultiPartStreamHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>           needHeader;
        ::ll::TypedStorage<1, 1, bool>           needTrailer;
        ::ll::TypedStorage<8, 32, ::std::string> header;
        ::ll::TypedStorage<8, 32, ::std::string> trailer;
        ::ll::TypedStorage<8, 8, uint64>         currentFileByte;
        ::ll::TypedStorage<8, 8, uint64>         totalFileByte;
        ::ll::TypedStorage<8, 8, uint64>         totalStreamSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::FileInfo>                                 mFile;
    ::ll::TypedStorage<8, 96, ::FileUploadManager::MultiPartStreamHelper> mMultiPartHelper;
    ::ll::TypedStorage<4, 4, ::UploadState>                               mState;
    ::ll::TypedStorage<4, 4, ::UploadError>                               mUploadError;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IFilePicker>>           mFilePicker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IFileChunkUploader>>    mFileUploader;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                mIOTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::FileArchiver>> mFileArchiver;
    ::ll::TypedStorage<1, 1, bool>                                        mUploadAllAtOnce;
    ::ll::TypedStorage<1, 1, bool>                                        mContinueOnReception;
    ::ll::TypedStorage<1, 1, bool>                                        mUseStream;
    // NOLINTEND

public:
    // prevent constructor by default
    FileUploadManager& operator=(FileUploadManager const&);
    FileUploadManager(FileUploadManager const&);
    FileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileUploadManager();

    virtual float getUploadProgress() const;

    virtual void archiveAndUploadFileToRealmStorage(
        ::std::string const& uploadId,
        ::Core::Path const&  path,
        int const            slotIndex,
        ::std::string const& realmsGuid
    ) = 0;

#ifdef LL_PLAT_S
    virtual void uploadFileToRealmStorage(::std::string const&, ::Core::Path const&, int const);
#else // LL_PLAT_C
    virtual void uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileUploadManager(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);

#ifdef LL_PLAT_C
    MCAPI FileUploadManager(
        ::TaskGroup&                                         taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>              fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const& fileArchiver
    );
#endif

    MCAPI void _uploadChunk(::FileChunkInfo const& chunk);

    MCAPI void addCallbackQueue(::std::function<void()> callback);

    MCAPI void uploadFile(
        ::std::string const& uploadId,
        ::Core::Path const&  filePath,
        bool                 autoStartUpload,
        ::Json::Value const& uploadOptions
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::TaskGroup&                                         taskGroup,
        ::std::shared_ptr<::IFileChunkUploader>              fileUploader,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> const& fileArchiver
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getUploadProgress() const;

#ifdef LL_PLAT_C
    MCAPI void $uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
#endif


    // NOLINTEND
};
