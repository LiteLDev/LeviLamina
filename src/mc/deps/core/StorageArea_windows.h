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
    // vIndex: 0
    virtual ~StorageArea_windows() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual std::unique_ptr<class Core::FileSystemImpl> createTransaction(::Core::FileAccessType);

    // vIndex: 3
    virtual bool supportsSizeQuery() const;

    // vIndex: 4
    virtual uint64 getTotalSize() const;

    // vIndex: 5
    virtual class Core::Result getUsedSize(uint64&);

    // vIndex: 6
    virtual void setUsedSizeOverride(uint64);

    // vIndex: 7
    virtual void clearUsedSizeOverride();

    // vIndex: 8
    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    // vIndex: 9
    virtual void __unk_vfn_9();

    // vIndex: 10
    virtual void __unk_vfn_10();

    // vIndex: 11
    virtual void __unk_vfn_11();

    // vIndex: 12
    virtual bool supportsExtendSize() const;

    // vIndex: 13
    virtual bool canExtendSize() const;

    // vIndex: 14
    virtual void resetCanAttemptExtendSize();

    // vIndex: 15
    virtual class Core::Result getExtendSizeThreshold(uint64&) const;

    // vIndex: 16
    virtual void attemptExtendSize(int64 const&, std::function<void()>);

    // vIndex: 17
    virtual void preemptiveExtendSize(uint64, std::function<void()>, std::function<void()>);

    // vIndex: 18
    virtual uint64 getAvailableUserStorageSize();

    // vIndex: 19
    virtual void unloadFlatFileManifests(bool shouldClearManifests);

    // vIndex: 20
    virtual void __unk_vfn_20();

    // vIndex: 21
    virtual void __unk_vfn_21();

    // vIndex: 22
    virtual void __unk_vfn_22();

    // vIndex: 23
    virtual void __unk_vfn_23();

    // vIndex: 24
    virtual void __unk_vfn_24();

    // vIndex: 25
    virtual void __unk_vfn_25();

    // vIndex: 26
    virtual void __unk_vfn_26();

    // vIndex: 27
    virtual bool shouldAllowCommit() const;

    // vIndex: 28
    virtual void trackBytesWritten(class Core::Path const&, uint64 amount, ::Core::WriteOperation);

    // vIndex: 29
    virtual void trackWriteOperation(class Core::Path const&, ::Core::WriteOperation);

    // vIndex: 30
    virtual struct Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    MCAPI StorageArea_windows(::Core::FileAccessType, class Core::Path const&, bool);

    // NOLINTEND
};

}; // namespace Core
