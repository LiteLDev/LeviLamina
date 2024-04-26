#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileAccessType.h"
#include "mc/deps/core/FileStorageArea.h"
#include "mc/deps/core/WriteOperation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class StorageArea_windows {
public:
    // prevent constructor by default
    StorageArea_windows& operator=(StorageArea_windows const&);
    StorageArea_windows(StorageArea_windows const&);
    StorageArea_windows();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StorageArea_windows@Core@@UEAA@XZ
    virtual ~StorageArea_windows() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol:
    // ?createTransaction@?$BasicDirectoryStorageArea@VFileSystem_windows@Core@@@Core@@UEAA?AV?$unique_ptr@VFileSystemImpl@Core@@U?$default_delete@VFileSystemImpl@Core@@@std@@@std@@W4FileAccessType@2@@Z
    virtual std::unique_ptr<class Core::FileSystemImpl> createTransaction(::Core::FileAccessType);

    // vIndex: 3, symbol: ?supportsSizeQuery@StorageArea_windows@Core@@UEBA_NXZ
    virtual bool supportsSizeQuery() const;

    // vIndex: 4, symbol: ?getTotalSize@StorageArea_windows@Core@@UEBA_KXZ
    virtual uint64 getTotalSize() const;

    // vIndex: 5, symbol: ?getUsedSize@StorageArea_windows@Core@@UEAA?AVResult@2@AEA_K@Z
    virtual class Core::Result getUsedSize(uint64&);

    // vIndex: 6, symbol: ?setUsedSizeOverride@StorageArea_windows@Core@@UEAAX_K@Z
    virtual void setUsedSizeOverride(uint64);

    // vIndex: 7, symbol: ?clearUsedSizeOverride@StorageArea_windows@Core@@UEAAXXZ
    virtual void clearUsedSizeOverride();

    // vIndex: 8, symbol: ?notifyChangeInFileSize@FileStorageArea@Core@@UEAAX_J0@Z
    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: ?supportsExtendSize@StorageArea_windows@Core@@UEBA_NXZ
    virtual bool supportsExtendSize() const;

    // vIndex: 13, symbol: ?canExtendSize@StorageArea_windows@Core@@UEBA_NXZ
    virtual bool canExtendSize() const;

    // vIndex: 14, symbol: ?resetCanAttemptExtendSize@StorageArea_windows@Core@@UEAAXXZ
    virtual void resetCanAttemptExtendSize();

    // vIndex: 15, symbol: ?getExtendSizeThreshold@StorageArea_windows@Core@@UEBA?AVResult@2@AEA_K@Z
    virtual class Core::Result getExtendSizeThreshold(uint64&) const;

    // vIndex: 16, symbol: ?attemptExtendSize@StorageArea_windows@Core@@UEAAXAEB_JV?$function@$$A6AXXZ@std@@@Z
    virtual void attemptExtendSize(int64 const&, std::function<void()>);

    // vIndex: 17, symbol: ?preemptiveExtendSize@StorageArea_windows@Core@@UEAAX_KV?$function@$$A6AXXZ@std@@1@Z
    virtual void preemptiveExtendSize(uint64, std::function<void()>, std::function<void()>);

    // vIndex: 18, symbol: ?getAvailableUserStorageSize@StorageArea_windows@Core@@UEAA_KXZ
    virtual uint64 getAvailableUserStorageSize();

    // vIndex: 19, symbol: ?unloadFlatFileManifests@FileStorageArea@Core@@UEAAX_N@Z
    virtual void unloadFlatFileManifests(bool shouldClearManifests);

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24();

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: ?shouldAllowCommit@FileStorageArea@Core@@UEBA_NXZ
    virtual bool shouldAllowCommit() const;

    // vIndex: 28, symbol: ?trackBytesWritten@FileStorageArea@Core@@UEAAXAEBVPath@2@_KW4WriteOperation@2@@Z
    virtual void trackBytesWritten(class Core::Path const&, uint64 amount, ::Core::WriteOperation);

    // vIndex: 29, symbol: ?trackWriteOperation@FileStorageArea@Core@@UEAAXAEBVPath@2@W4WriteOperation@2@@Z
    virtual void trackWriteOperation(class Core::Path const&, ::Core::WriteOperation);

    // vIndex: 30, symbol:
    // ?getStorageAreaSpaceInfo@StorageArea_windows@Core@@UEAA?AUStorageAreaSpaceInfo@FileStorageArea@2@XZ
    virtual struct Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    // symbol: ??0StorageArea_windows@Core@@QEAA@W4FileAccessType@1@AEBVPath@1@_N@Z
    MCAPI StorageArea_windows(::Core::FileAccessType, class Core::Path const&, bool);

    // NOLINTEND
};

}; // namespace Core
