#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileIndexLru; }
namespace Core { class FileStats; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { class StorageAreaStateListener; }
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
    virtual ~FileStorageArea();

    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) = 0;

    virtual ::std::unique_ptr<::Core::FileSystemImpl>
    createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    virtual bool supportsSizeQuery() const = 0;

    virtual uint64 getTotalSize() const = 0;

    virtual ::Core::Result getUsedSize(uint64&) = 0;

    virtual void setUsedSizeOverride(uint64);

    virtual void clearUsedSizeOverride();

    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    virtual bool handlesPendingWrites() const;

    virtual void informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack);

    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const;

    virtual void informStorageAreaCopy(uint64 storageAreaSize);

    virtual bool supportsExtendSize() const;

    virtual bool canExtendSize() const;

    virtual void resetCanAttemptExtendSize();

    virtual ::Core::Result getExtendSizeThreshold(uint64&) const;

    virtual void attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    virtual void preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );

    virtual uint64 getAvailableUserStorageSize();

    virtual void unloadFlatFileManifests(bool shouldClearManifests);

    virtual void tick();

    virtual void flushImmediately();

    virtual void enableFlushToDisk(bool);

    virtual void enableSequentialWrites(bool);

    virtual bool checkCorrupt(bool handleCorruption);

    virtual ::Bedrock::NonOwnerPointer<::Core::FileIndexLru> getFileIndexLru();

    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    virtual uint64 getTransactionWriteSizeLimit() const;

    virtual ::Core::Result setSaveDataIcon(::Core::PathView);

    virtual bool shouldAllowCommit() const;

    virtual void trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    virtual void trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);

    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    virtual bool shouldRecordFileError(::Core::PathView, ::std::error_code) const;

    virtual ::Core::Result _commit();

    virtual ::Core::Result _onTransactionsEmpty(bool fromChild);

    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileStorageArea(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       isAccessedDirectly,
        ::std::shared_ptr<::Core::FileStorageArea> parent
    );

    MCNAPI void _addReadOperation(bool succeeded, uint64 numBytesRead);

    MCNAPI void _addWriteOperation(bool succeeded, uint64 numBytesWritten);

    MCNAPI void _beginTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCNAPI ::Core::Result _endTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCNAPI_C void addStateListener(::Core::StorageAreaStateListener* l);

    MCNAPI bool canWrite() const;

    MCNAPI void checkUserStorage();

    MCNAPI void removeStateListener(::Core::StorageAreaStateListener* l);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result
    _getStorageAreaForPathImpl(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);

    MCNAPI_C static ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::BasicLockbox<::std::vector<::Core::FileStats*>, ::Bedrock::Threading::Mutex>&
    sStorageAreaFileStats();

    MCNAPI static ::Core::StorageAreasTree& sStorageAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       isAccessedDirectly,
        ::std::shared_ptr<::Core::FileStorageArea> parent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Core::FileSystemImpl>
    $createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

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

    MCNAPI void $preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );

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

} // namespace Core
