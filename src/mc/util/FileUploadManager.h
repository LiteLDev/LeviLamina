#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
class IFileChunkUploader;
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
        ::ll::UntypedStorage<1, 1>  mUnk1e2144;
        ::ll::UntypedStorage<1, 1>  mUnkd4776a;
        ::ll::UntypedStorage<8, 32> mUnkaae551;
        ::ll::UntypedStorage<8, 32> mUnke0cd00;
        ::ll::UntypedStorage<8, 8>  mUnke36722;
        ::ll::UntypedStorage<8, 8>  mUnka9f509;
        ::ll::UntypedStorage<8, 8>  mUnk811586;
        // NOLINTEND

    public:
        // prevent constructor by default
        MultiPartStreamHelper& operator=(MultiPartStreamHelper const&);
        MultiPartStreamHelper(MultiPartStreamHelper const&);
        MultiPartStreamHelper();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~MultiPartStreamHelper();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnkd53a1f;
    ::ll::UntypedStorage<8, 96>  mUnk7e81a8;
    ::ll::UntypedStorage<4, 4>   mUnk3637b8;
    ::ll::UntypedStorage<4, 4>   mUnkcdb53c;
    ::ll::UntypedStorage<8, 16>  mUnk572878;
    ::ll::UntypedStorage<8, 16>  mUnkbea5f5;
    ::ll::UntypedStorage<8, 8>   mUnka99ce1;
    ::ll::UntypedStorage<8, 24>  mUnkc47b3b;
    ::ll::UntypedStorage<1, 1>   mUnk976e6e;
    ::ll::UntypedStorage<1, 1>   mUnk64961a;
    ::ll::UntypedStorage<1, 1>   mUnk2e4039;
    ::ll::UntypedStorage<8, 616> mUnk1fdfcf;
    // NOLINTEND

public:
    // prevent constructor by default
    FileUploadManager& operator=(FileUploadManager const&);
    FileUploadManager(FileUploadManager const&);
    FileUploadManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileUploadManager();

    // vIndex: 1
    virtual float getUploadProgress() const;

    // vIndex: 2
    virtual void
    archiveAndUploadFileToRealmStorage(::std::string const&, ::Core::Path const&, int const, ::std::string const&) = 0;

    // vIndex: 3
    virtual void uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileUploadManager(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);

    MCAPI void _generateMultiPartHelper();

    MCAPI void _resumeUpload();

    MCAPI void _uploadChunk(::FileChunkInfo const& chunk);

    MCAPI void _uploadStream();

    MCAPI void addCallbackQueue(::std::function<void()> callback);

    MCAPI void setFailed(::UploadError reason);

    MCAPI void setUseStream(bool stream);

    MCAPI void update();

    MCAPI void uploadChunk(int chunkID);

    MCAPI void uploadFile(
        ::std::string const& uploadId,
        ::Core::Path const&  filePath,
        bool                 autoStartUpload,
        ::Json::Value const& uploadOptions
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BOUNDARY();

    MCAPI static int const& CHUNK_UPLOAD_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TaskGroup& taskGroup, ::std::shared_ptr<::IFileChunkUploader> fileUploader);
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

    MCAPI void $uploadFileToRealmStorage(::std::string const& uploadId, ::Core::Path const& path, int const slotIndex);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
