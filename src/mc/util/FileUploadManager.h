#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/UploadError.h"

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
        // symbol: ??1MultiPartStreamHelper@FileUploadManager@@QEAA@XZ
        MCAPI ~MultiPartStreamHelper();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileUploadManager& operator=(FileUploadManager const&);
    FileUploadManager(FileUploadManager const&);
    FileUploadManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FileUploadManager@@UEAA@XZ
    virtual ~FileUploadManager();

    // vIndex: 1, symbol: ?getUploadProgress@FileUploadManager@@UEBAMXZ
    virtual float getUploadProgress() const;

    // vIndex: 2, symbol:
    // ?uploadFileToRealmStorage@ResourcePackFileUploadManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
    virtual void uploadFileToRealmStorage(
        std::string const&      uploadId,
        class Core::Path const& path,
        int                     slotIndex,
        std::string const&      realmsGuid
    ) = 0;

    // symbol: ??0FileUploadManager@@QEAA@AEAVTaskGroup@@V?$shared_ptr@VIFileChunkUploader@@@std@@@Z
    MCAPI FileUploadManager(class TaskGroup& taskGroup, std::shared_ptr<class IFileChunkUploader> fileUploader);

    // symbol: ?addCallbackQueue@FileUploadManager@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void addCallbackQueue(std::function<void()> callback);

    // symbol: ?setFailed@FileUploadManager@@QEAAXW4UploadError@@@Z
    MCAPI void setFailed(::UploadError reason);

    // symbol: ?setUseStream@FileUploadManager@@QEAAX_N@Z
    MCAPI void setUseStream(bool stream);

    // symbol: ?update@FileUploadManager@@QEAAXXZ
    MCAPI void update();

    // symbol: ?uploadChunk@FileUploadManager@@QEAAXH@Z
    MCAPI void uploadChunk(int chunkID);

    // symbol:
    // ?uploadFile@FileUploadManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@_NAEBVValue@Json@@@Z
    MCAPI void uploadFile(
        std::string const&       uploadId,
        class Core::Path const&  filePath,
        bool                     autoStartUpload,
        class Json::Value const& uploadOptions
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_generateMultiPartHelper@FileUploadManager@@IEAAXXZ
    MCAPI void _generateMultiPartHelper();

    // symbol: ?_resumeUpload@FileUploadManager@@IEAAXXZ
    MCAPI void _resumeUpload();

    // symbol: ?_uploadChunk@FileUploadManager@@IEAAXAEBUFileChunkInfo@@@Z
    MCAPI void _uploadChunk(struct FileChunkInfo const& chunk);

    // symbol: ?_uploadStream@FileUploadManager@@IEAAXXZ
    MCAPI void _uploadStream();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?CHUNK_UPLOAD_SIZE@FileUploadManager@@1HB
    MCAPI static int const CHUNK_UPLOAD_SIZE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BOUNDARY@FileUploadManager@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BOUNDARY;

    // NOLINTEND
};
