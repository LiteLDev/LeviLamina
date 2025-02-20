#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStats; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { class StorageAreasTree; }
// clang-format on

namespace Core {

class FileStorageArea : public ::std::enable_shared_from_this<::Core::FileStorageArea> {
public:
    // FileStorageArea inner types declare
    // clang-format off
    struct StorageAreaSpaceInfo;
    // clang-format on

    // FileStorageArea inner types define
    enum class FlushableLevelDbEnvType : int {
        None        = 0,
        InMemory    = 1,
        StorageArea = 2,
    };

    struct StorageAreaSpaceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka44c95;
        ::ll::UntypedStorage<8, 8> mUnk545140;
        ::ll::UntypedStorage<8, 8> mUnkd44356;
        // NOLINTEND

    public:
        // prevent constructor by default
        StorageAreaSpaceInfo& operator=(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnk63cc78;
    ::ll::UntypedStorage<8, 24>  mUnka56475;
    ::ll::UntypedStorage<1, 1>   mUnk7f3baf;
    ::ll::UntypedStorage<1, 1>   mUnk6060c1;
    ::ll::UntypedStorage<8, 64>  mUnk3e8909;
    ::ll::UntypedStorage<8, 64>  mUnk6a2388;
    ::ll::UntypedStorage<8, 16>  mUnk683578;
    ::ll::UntypedStorage<4, 4>   mUnkd6345d;
    ::ll::UntypedStorage<8, 32>  mUnke4ae6a;
    ::ll::UntypedStorage<8, 24>  mUnk3c594a;
    ::ll::UntypedStorage<8, 32>  mUnkedd4a1;
    ::ll::UntypedStorage<8, 144> mUnk55245b;
    ::ll::UntypedStorage<1, 1>   mUnk6e99fd;
    ::ll::UntypedStorage<8, 88>  mUnk31611b;
    ::ll::UntypedStorage<1, 1>   mUnkf29ed2;
    ::ll::UntypedStorage<8, 16>  mUnkecef76;
    ::ll::UntypedStorage<1, 1>   mUnk949164;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStorageArea& operator=(FileStorageArea const&);
    FileStorageArea(FileStorageArea const&);
    FileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStorageArea();

    // vIndex: 2
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) = 0;

    // vIndex: 1
    virtual ::std::unique_ptr<::Core::FileSystemImpl>
    createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    // vIndex: 3
    virtual bool supportsSizeQuery() const = 0;

    // vIndex: 4
    virtual uint64 getTotalSize() const = 0;

    // vIndex: 5
    virtual ::Core::Result getUsedSize(uint64&) = 0;

    // vIndex: 6
    virtual void setUsedSizeOverride(uint64);

    // vIndex: 7
    virtual void clearUsedSizeOverride();

    // vIndex: 8
    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    // vIndex: 9
    virtual bool handlesPendingWrites() const;

    // vIndex: 10
    virtual void informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack);

    // vIndex: 11
    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const;

    // vIndex: 12
    virtual void informStorageAreaCopy(uint64 storageAreaSize);

    // vIndex: 13
    virtual bool supportsExtendSize() const;

    // vIndex: 14
    virtual bool canExtendSize() const;

    // vIndex: 15
    virtual void resetCanAttemptExtendSize();

    // vIndex: 16
    virtual ::Core::Result getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;

    // vIndex: 17
    virtual void attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    // vIndex: 18
    virtual void preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );

    // vIndex: 19
    virtual uint64 getAvailableUserStorageSize();

    // vIndex: 20
    virtual void unloadFlatFileManifests(bool shouldClearManifests);

    // vIndex: 21
    virtual void tick();

    // vIndex: 22
    virtual void flushImmediately();

    // vIndex: 23
    virtual void enableFlushToDisk(bool);

    // vIndex: 24
    virtual bool checkCorrupt(bool handleCorruption);

    // vIndex: 25
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    // vIndex: 26
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 27
    virtual ::Core::Result setSaveDataIcon(::Core::PathView iconPath);

    // vIndex: 28
    virtual bool shouldAllowCommit() const;

    // vIndex: 29
    virtual void trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    // vIndex: 30
    virtual void trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);

    // vIndex: 31
    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    // vIndex: 32
    virtual ::Core::Result _commit();

    // vIndex: 33
    virtual ::Core::Result _onTransactionsEmpty(bool fromChild);

    // vIndex: 34
    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileStorageArea(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       parent,
        ::std::shared_ptr<::Core::FileStorageArea> isAccessedDirectly
    );

    MCAPI void _addReadOperation(bool succeeded, uint64 numBytesRead);

    MCAPI void _addWriteOperation(bool succeeded, uint64 numBytesWritten);

    MCAPI void _beginTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCAPI ::Core::Result _endTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCAPI void _notifyEndWrite();

    MCAPI bool canWrite() const;

    MCAPI void checkUserStorage();

    MCAPI bool isOutOfDiskSpaceError() const;

    MCAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result
    _getStorageAreaForPathImpl(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);

    MCAPI static ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Core::FileStats*>& sStorageAreaFileStats();

    MCAPI static ::std::recursive_mutex& sStorageAreaLock();

    MCAPI static ::Core::StorageAreasTree& sStorageAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       parent,
        ::std::shared_ptr<::Core::FileStorageArea> isAccessedDirectly
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
    MCFOLD ::std::unique_ptr<::Core::FileSystemImpl>
    $createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    MCFOLD void $setUsedSizeOverride(uint64);

    MCFOLD void $clearUsedSizeOverride();

    MCAPI void $notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    MCFOLD bool $handlesPendingWrites() const;

    MCFOLD void $informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack);

    MCFOLD uint64 $estimatePendingWriteDiskSize(uint64 rawFileSize) const;

    MCFOLD void $informStorageAreaCopy(uint64 storageAreaSize);

    MCFOLD bool $supportsExtendSize() const;

    MCFOLD bool $canExtendSize() const;

    MCAPI void $resetCanAttemptExtendSize();

    MCAPI ::Core::Result $getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;

    MCAPI void $attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    MCAPI void $preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );

    MCAPI uint64 $getAvailableUserStorageSize();

    MCAPI void $unloadFlatFileManifests(bool shouldClearManifests);

    MCFOLD void $tick();

    MCFOLD void $flushImmediately();

    MCFOLD void $enableFlushToDisk(bool);

    MCFOLD bool $checkCorrupt(bool handleCorruption);

    MCFOLD ::Core::FileStorageArea::FlushableLevelDbEnvType $getFlushableLevelDbEnvType() const;

    MCFOLD uint64 $getTransactionWriteSizeLimit() const;

    MCFOLD ::Core::Result $setSaveDataIcon(::Core::PathView iconPath);

    MCAPI bool $shouldAllowCommit() const;

    MCAPI void $trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    MCAPI void $trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);

    MCAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();

    MCFOLD ::Core::Result $_commit();

    MCFOLD ::Core::Result $_onTransactionsEmpty(bool fromChild);

    MCFOLD void $_onTeardown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
