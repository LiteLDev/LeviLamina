#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileIndexLru; }
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
        None = 0,
        InMemory = 1,
        StorageArea = 2,
    };
    
    struct StorageAreaSpaceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka44c95;
        ::ll::UntypedStorage<8, 8> mUnk545140;
        ::ll::UntypedStorage<8, 8> mUnkd44356;
        ::ll::UntypedStorage<1, 1> mUnka493f5;
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
    ::ll::UntypedStorage<8, 80> mUnk63cc78;
    ::ll::UntypedStorage<8, 24> mUnka56475;
    ::ll::UntypedStorage<1, 1> mUnk7f3baf;
    ::ll::UntypedStorage<1, 1> mUnk6060c1;
    ::ll::UntypedStorage<8, 64> mUnk3e8909;
    ::ll::UntypedStorage<8, 64> mUnk6a2388;
    ::ll::UntypedStorage<8, 16> mUnk683578;
    ::ll::UntypedStorage<4, 4> mUnkd6345d;
    ::ll::UntypedStorage<8, 32> mUnke4ae6a;
    ::ll::UntypedStorage<8, 24> mUnk3c594a;
    ::ll::UntypedStorage<8, 32> mUnkedd4a1;
    ::ll::UntypedStorage<8, 144> mUnk55245b;
    ::ll::UntypedStorage<1, 1> mUnk6e99fd;
    ::ll::UntypedStorage<8, 88> mUnk31611b;
    ::ll::UntypedStorage<1, 1> mUnkf29ed2;
    ::ll::UntypedStorage<8, 16> mUnkecef76;
    ::ll::UntypedStorage<1, 1> mUnk949164;
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
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

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
    virtual ::Core::Result getExtendSizeThreshold(uint64&) const;

    // vIndex: 17
    virtual void attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    // vIndex: 18
    virtual void preemptiveExtendSize(uint64 const expectedContentSize, ::std::function<void()> successCallback, ::std::function<void()> failureCallback);

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
    virtual void enableSequentialWrites(bool);

    // vIndex: 25
    virtual bool checkCorrupt(bool handleCorruption);

    // vIndex: 26
    virtual ::Bedrock::NonOwnerPointer<::Core::FileIndexLru> getFileIndexLru();

    // vIndex: 27
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    // vIndex: 28
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 29
    virtual ::Core::Result setSaveDataIcon(::Core::PathView);

    // vIndex: 30
    virtual bool shouldAllowCommit() const;

    // vIndex: 31
    virtual void trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    // vIndex: 32
    virtual void trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);

    // vIndex: 33
    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    // vIndex: 34
    virtual ::std::optional<::std::string> getIntegrityResults() const;

    // vIndex: 35
    virtual bool shouldRecordFileError(::Core::PathView, ::std::error_code) const;

    // vIndex: 36
    virtual ::Core::Result _commit();

    // vIndex: 37
    virtual ::Core::Result _onTransactionsEmpty(bool fromChild);

    // vIndex: 38
    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileStorageArea(::Core::FileAccessType type, ::Core::PathView rootPath, bool usesFlatFiles, bool isAccessedDirectly, ::std::shared_ptr<::Core::FileStorageArea> parent);

    MCNAPI void _addReadOperation(bool succeeded, uint64 numBytesRead);

    MCNAPI void _addWriteOperation(bool succeeded, uint64 numBytesWritten);

    MCNAPI void _beginTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCNAPI ::Core::Result _endTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCNAPI bool canWrite() const;

    MCNAPI void checkUserStorage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result _getStorageAreaForPathImpl(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::Core::FileStats*>& sStorageAreaFileStats();

    MCNAPI static ::std::recursive_mutex& sStorageAreaLock();

    MCNAPI static ::Core::StorageAreasTree& sStorageAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FileAccessType type, ::Core::PathView rootPath, bool usesFlatFiles, bool isAccessedDirectly, ::std::shared_ptr<::Core::FileStorageArea> parent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Core::FileSystemImpl> $createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    MCNAPI void $setUsedSizeOverride(uint64);

    MCNAPI void $clearUsedSizeOverride();

    MCNAPI void $notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    MCNAPI bool $handlesPendingWrites() const;

    MCNAPI void $informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack);

    MCNAPI uint64 $estimatePendingWriteDiskSize(uint64 rawFileSize) const;

    MCNAPI void $informStorageAreaCopy(uint64 storageAreaSize);

    MCNAPI bool $supportsExtendSize() const;

    MCNAPI bool $canExtendSize() const;

    MCNAPI void $resetCanAttemptExtendSize();

    MCNAPI ::Core::Result $getExtendSizeThreshold(uint64&) const;

    MCNAPI void $attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    MCNAPI void $preemptiveExtendSize(uint64 const expectedContentSize, ::std::function<void()> successCallback, ::std::function<void()> failureCallback);

    MCNAPI uint64 $getAvailableUserStorageSize();

    MCNAPI void $unloadFlatFileManifests(bool shouldClearManifests);

    MCNAPI void $tick();

    MCNAPI void $flushImmediately();

    MCNAPI void $enableFlushToDisk(bool);

    MCNAPI void $enableSequentialWrites(bool);

    MCNAPI bool $checkCorrupt(bool handleCorruption);

    MCNAPI ::Bedrock::NonOwnerPointer<::Core::FileIndexLru> $getFileIndexLru();

    MCNAPI ::Core::FileStorageArea::FlushableLevelDbEnvType $getFlushableLevelDbEnvType() const;

    MCNAPI uint64 $getTransactionWriteSizeLimit() const;

    MCNAPI ::Core::Result $setSaveDataIcon(::Core::PathView);

    MCNAPI bool $shouldAllowCommit() const;

    MCNAPI void $trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    MCNAPI void $trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);

    MCNAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();

    MCNAPI ::std::optional<::std::string> $getIntegrityResults() const;

    MCNAPI bool $shouldRecordFileError(::Core::PathView, ::std::error_code) const;

    MCNAPI ::Core::Result $_commit();

    MCNAPI ::Core::Result $_onTransactionsEmpty(bool fromChild);

    MCNAPI void $_onTeardown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
