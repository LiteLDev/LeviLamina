#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStats.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaState.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"
#include "mc/deps/core/utility/Subject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileIndexLru; }
namespace Core { class FileStorageAreaObserver; }
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
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
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                     mLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::FileSystemImpl*>>     mAllTransactions;
    ::ll::TypedStorage<1, 1, bool>                                        mCanAttemptExtendSave;
    ::ll::TypedStorage<1, 1, bool>                                        mCachedFileUsageSize;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                          mTransactionStats;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                          mTotalStats;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>> mParent;
    ::ll::TypedStorage<4, 4, ::Core::FileAccessType>                      mAccessType;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>          mRootPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::FileSystemImpl*>>     mWriteTransactions;
    ::ll::TypedStorage<8, 32, ::Core::Subject<::Core::FileStorageAreaObserver, ::Core::SingleThreadedLock>> mSubject;
    ::ll::TypedStorage<8, 144, ::Core::StorageAreaState>                                                    mState;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                 mFileIOSuspended;
    ::ll::TypedStorage<8, 88, ::std::condition_variable_any>                      mResumeSignal;
    ::ll::TypedStorage<1, 1, bool>                                                mLoggingEnabled;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FlatFileManifestTracker>> mManifestTracker;
    ::ll::TypedStorage<1, 1, bool>                                                mIsAccessedDirectly;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileStorageArea();

    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType accessType) = 0;

    virtual ::std::unique_ptr<::Core::FileSystemImpl>
    createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    virtual bool supportsSizeQuery() const = 0;

    virtual uint64 getTotalSize() const = 0;

    virtual ::Core::Result getUsedSize(uint64& outUsedSize) = 0;

    virtual void setUsedSizeOverride(uint64 fileSize);

    virtual void clearUsedSizeOverride();

    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    virtual bool handlesPendingWrites() const;

    virtual void informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack);

    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const;

    virtual void informStorageAreaCopy(uint64 storageAreaSize);

    virtual bool supportsExtendSize() const;

    virtual bool canExtendSize() const;

    virtual void resetCanAttemptExtendSize();

    virtual ::Core::Result getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;

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

    virtual bool shouldRecordFileError(::Core::PathView path, ::std::error_code error) const;

    virtual ::Core::Result _commit();

    virtual ::Core::Result _onTransactionsEmpty(bool fromChild);

    virtual void _onTeardown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileStorageArea(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       isAccessedDirectly,
        ::std::shared_ptr<::Core::FileStorageArea> parent
    );

    MCAPI void _addReadOperation(bool succeeded, uint64 numBytesRead);

    MCAPI void _addWriteOperation(bool succeeded, uint64 numBytesWritten);

    MCAPI void _beginTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

    MCAPI ::Core::Result _endTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);

#ifdef LL_PLAT_C
    MCAPI void addStateListener(::Core::StorageAreaStateListener* l);
#endif

    MCAPI bool canWrite() const;

    MCAPI void checkUserStorage();

    MCAPI void removeStateListener(::Core::StorageAreaStateListener* l);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result
    _getStorageAreaForPathImpl(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);

#ifdef LL_PLAT_C
    MCAPI static ::Core::Result
    getStorageAreaForPath(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Threading::BasicLockbox<::std::vector<::Core::FileStats*>, ::Bedrock::Threading::Mutex>&
    sStorageAreaFileStats();

    MCAPI static ::Core::StorageAreasTree& sStorageAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::unique_ptr<::Core::FileSystemImpl>
    $createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);

    MCFOLD void $setUsedSizeOverride(uint64 fileSize);

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

    MCFOLD void $enableSequentialWrites(bool);

    MCFOLD bool $checkCorrupt(bool handleCorruption);

    MCFOLD ::Bedrock::NonOwnerPointer<::Core::FileIndexLru> $getFileIndexLru();

    MCFOLD ::Core::FileStorageArea::FlushableLevelDbEnvType $getFlushableLevelDbEnvType() const;

    MCFOLD uint64 $getTransactionWriteSizeLimit() const;

    MCAPI ::Core::Result $setSaveDataIcon(::Core::PathView);

    MCAPI bool $shouldAllowCommit() const;

    MCAPI void $trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);

    MCAPI void $trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);

    MCAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();

    MCFOLD bool $shouldRecordFileError(::Core::PathView path, ::std::error_code error) const;

    MCFOLD ::Core::Result $_commit();

    MCFOLD ::Core::Result $_onTransactionsEmpty(bool fromChild);

    MCFOLD void $_onTeardown();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
