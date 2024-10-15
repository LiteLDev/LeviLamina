#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStats; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { class StorageAreaStateListener; }
namespace Core { class StorageAreasTree; }
// clang-format on

namespace Core {

class FileStorageArea {
public:
    // FileStorageArea inner types declare
    // clang-format off
    struct StorageAreaSpaceInfo;
    // clang-format on

    // FileStorageArea inner types define
    enum class FlushableLevelDbEnvType {};

    struct StorageAreaSpaceInfo {
    public:
        // prevent constructor by default
        StorageAreaSpaceInfo& operator=(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo();
    };

public:
    // prevent constructor by default
    FileStorageArea& operator=(FileStorageArea const&);
    FileStorageArea(FileStorageArea const&);
    FileStorageArea();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStorageArea();

    // vIndex: 1
    virtual std::unique_ptr<class Core::FileSystemImpl>
    createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    // vIndex: 2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6
    virtual void setUsedSizeOverride(uint64);

    // vIndex: 7
    virtual void clearUsedSizeOverride();

    // vIndex: 8
    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    // vIndex: 9
    virtual bool handlesPendingWrites() const;

    // vIndex: 10
    virtual void informPendingWriteSize(uint64 numBytesWritePending, bool fromResourcePack);

    // vIndex: 11
    virtual void informStorageAreaCopy(uint64 storageAreaSize);

    // vIndex: 12
    virtual bool supportsExtendSize() const;

    // vIndex: 13
    virtual bool canExtendSize() const;

    // vIndex: 14
    virtual void resetCanAttemptExtendSize();

    // vIndex: 15
    virtual class Core::Result getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;

    // vIndex: 16
    virtual void attemptExtendSize(int64 const& currentFreeSpace, std::function<void()> onCompleteCallback);

    // vIndex: 17
    virtual void preemptiveExtendSize(
        uint64                expectedContentSize,
        std::function<void()> successCallback,
        std::function<void()> failureCallback
    );

    // vIndex: 18
    virtual uint64 getAvailableUserStorageSize();

    // vIndex: 19
    virtual void unloadFlatFileManifests(bool shouldClearManifests);

    // vIndex: 20
    virtual void tick();

    // vIndex: 21
    virtual void flushImmediately();

    // vIndex: 22
    virtual void enableFlushToDisk(bool);

    // vIndex: 23
    virtual bool checkCorrupt(bool handleCorruption);

    // vIndex: 24
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    // vIndex: 25
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 26
    virtual class Core::Result setSaveDataIcon(class Core::Path const& iconPath);

    // vIndex: 27
    virtual bool shouldAllowCommit() const;

    // vIndex: 28
    virtual void
    trackBytesWritten(class Core::Path const& targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    // vIndex: 29
    virtual void trackWriteOperation(class Core::Path const& targetPath, ::Core::WriteOperation writeOperation);

    // vIndex: 30
    virtual struct Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    // vIndex: 31
    virtual class Core::Result _commit();

    // vIndex: 32
    virtual class Core::Result _onTransactionsEmpty(bool fromChild);

    // vIndex: 33
    virtual void _onTeardown();

    MCAPI void checkUserStorage();

    MCAPI class Core::PathBuffer<std::string> const& getRootPath() const;

    MCAPI void removeStateListener(class Core::StorageAreaStateListener*);

    MCAPI static class Core::Result
    getStorageAreaForPath(std::shared_ptr<class Core::FileStorageArea>& fileStorageArea, class Core::Path const& path);

    MCAPI static void teardown();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI FileStorageArea(
        ::Core::FileAccessType                       type,
        class Core::Path const&                      rootPath,
        bool                                         usesFlatFiles,
        bool                                         isAccessedDirectly,
        std::shared_ptr<class Core::FileStorageArea> parent
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addReadOperation(bool succeeded, uint64 numBytesRead);

    MCAPI void _addReadWriteOperation(bool succeeded, uint64 numBytesRead, uint64 numBytesWritten);

    MCAPI void _addWriteOperation(bool succeeded, uint64 numBytesWritten);

    MCAPI void _beginTransaction(class Core::FileSystemImpl* pTransaction, bool fromChild);

    MCAPI uint64 _calculateAvailableUserStorageSize(uint64 usedSpace, uint64 totalSpace) const;

    MCAPI class Core::Result _endTransaction(class Core::FileSystemImpl* pTransaction, bool fromChild);

    MCAPI void _onDeleteFile(class Core::Path const& filePath);

    MCAPI void _onWriteFile(class Core::Path const& filePath);

    MCAPI static class Core::Result _getStorageAreaForPathImpl(
        std::shared_ptr<class Core::FileStorageArea>& fileStorageArea,
        class Core::Path const&                       path
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        ::Core::FileAccessType                       type,
        class Core::Path const&                      rootPath,
        bool                                         usesFlatFiles,
        bool                                         isAccessedDirectly,
        std::shared_ptr<class Core::FileStorageArea> parent
    );

    MCAPI void dtor$();

    MCAPI class Core::Result _commit$();

    MCAPI void _onTeardown$();

    MCAPI class Core::Result _onTransactionsEmpty$(bool fromChild);

    MCAPI void attemptExtendSize$(int64 const& currentFreeSpace, std::function<void()> onCompleteCallback);

    MCAPI bool canExtendSize$() const;

    MCAPI bool checkCorrupt$(bool handleCorruption);

    MCAPI void clearUsedSizeOverride$();

    MCAPI std::unique_ptr<class Core::FileSystemImpl>
          createTransaction$(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    MCAPI void enableFlushToDisk$(bool);

    MCAPI void flushImmediately$();

    MCAPI uint64 getAvailableUserStorageSize$();

    MCAPI class Core::Result getExtendSizeThreshold$(uint64& outExtendSizeThreshold) const;

    MCAPI ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType$() const;

    MCAPI struct Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo$();

    MCAPI uint64 getTransactionWriteSizeLimit$() const;

    MCAPI bool handlesPendingWrites$() const;

    MCAPI void informPendingWriteSize$(uint64 numBytesWritePending, bool fromResourcePack);

    MCAPI void informStorageAreaCopy$(uint64 storageAreaSize);

    MCAPI void notifyChangeInFileSize$(int64 changeInSize, int64 changeInAllocatedSize);

    MCAPI void preemptiveExtendSize$(
        uint64                expectedContentSize,
        std::function<void()> successCallback,
        std::function<void()> failureCallback
    );

    MCAPI void resetCanAttemptExtendSize$();

    MCAPI class Core::Result setSaveDataIcon$(class Core::Path const& iconPath);

    MCAPI void setUsedSizeOverride$(uint64);

    MCAPI bool shouldAllowCommit$() const;

    MCAPI bool supportsExtendSize$() const;

    MCAPI void tick$();

    MCAPI void
    trackBytesWritten$(class Core::Path const& targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    MCAPI void trackWriteOperation$(class Core::Path const& targetPath, ::Core::WriteOperation writeOperation);

    MCAPI void unloadFlatFileManifests$(bool shouldClearManifests);

    MCAPI static std::vector<class Core::FileStats*>& sStorageAreaFileStats();

    MCAPI static std::recursive_mutex& sStorageAreaLock();

    MCAPI static class Core::StorageAreasTree& sStorageAreas();

    // NOLINTEND
};

}; // namespace Core
