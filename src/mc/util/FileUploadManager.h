#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FileUploadManager {
public:
    // FileUploadManager inner types declare
    // clang-format off
    class MultiPartStreamHelper;
    // clang-format on

    // FileUploadManager inner types define
    class MultiPartStreamHelper {
    public:
        // prevent constructor by default
        MultiPartStreamHelper& operator=(MultiPartStreamHelper const&);
        MultiPartStreamHelper(MultiPartStreamHelper const&);
        MultiPartStreamHelper();

    public:
        // NOLINTBEGIN
        MCAPI ~MultiPartStreamHelper();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileUploadManager& operator=(FileUploadManager const&);
    FileUploadManager(FileUploadManager const&);
    FileUploadManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileUploadManager();

    // vIndex: 1
    virtual float getUploadProgress() const;

    // vIndex: 2
    virtual void uploadFileToRealmStorage(
        std::string const&      uploadId,
        class Core::Path const& path,
        int                     slotIndex,
        std::string const&      realmsGuid
    ) = 0;

    MCAPI FileUploadManager(class TaskGroup& taskGroup, std::shared_ptr<class IFileChunkUploader> fileUploader);

    MCAPI void addCallbackQueue(std::function<void()> callback);

    MCAPI void setFailed(::UploadError reason);

    MCAPI void setUseStream(bool stream);

    MCAPI void update();

    MCAPI void uploadChunk(int chunkID);

    MCAPI void uploadFile(
        std::string const&       uploadId,
        class Core::Path const&  filePath,
        bool                     autoStartUpload,
        class Json::Value const& uploadOptions
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _generateMultiPartHelper();

    MCAPI void _resumeUpload();

    MCAPI void _uploadChunk(struct FileChunkInfo const& chunk);

    MCAPI void _uploadStream();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI float getUploadProgress$() const;

    MCAPI static std::string const& BOUNDARY();

    MCAPI static int const& CHUNK_UPLOAD_SIZE();

    // NOLINTEND
};
