#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStorageArea.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystem_windows; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class StorageArea_windows : public ::Core::BasicDirectoryStorageArea<::Core::FileSystem_windows> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc8f210;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageArea_windows& operator=(StorageArea_windows const&);
    StorageArea_windows(StorageArea_windows const&);
    StorageArea_windows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool supportsSizeQuery() const /*override*/;

    // vIndex: 4
    virtual uint64 getTotalSize() const /*override*/;

    // vIndex: 5
    virtual ::Core::Result getUsedSize(uint64& outUsedSize) /*override*/;

    // vIndex: 6
    virtual void setUsedSizeOverride(uint64 fileSize) /*override*/;

    // vIndex: 7
    virtual void clearUsedSizeOverride() /*override*/;

    // vIndex: 12
    virtual bool supportsExtendSize() const /*override*/;

    // vIndex: 13
    virtual bool canExtendSize() const /*override*/;

    // vIndex: 14
    virtual void resetCanAttemptExtendSize() /*override*/;

    // vIndex: 15
    virtual ::Core::Result getExtendSizeThreshold(uint64& outExtendSizeThreshold) const /*override*/;

    // vIndex: 16
    virtual void
    attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback) /*override*/;

    // vIndex: 17
    virtual void preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    ) /*override*/;

    // vIndex: 18
    virtual uint64 getAvailableUserStorageSize() /*override*/;

    // vIndex: 30
    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo() /*override*/;

    // vIndex: 0
    virtual ~StorageArea_windows() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageArea_windows(::Core::FileAccessType accessType, ::Core::Path const& rootPath, bool usesFlatFile);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::FileAccessType accessType, ::Core::Path const& rootPath, bool usesFlatFile);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $supportsSizeQuery() const;

    MCAPI uint64 $getTotalSize() const;

    MCAPI ::Core::Result $getUsedSize(uint64& outUsedSize);

    MCAPI void $setUsedSizeOverride(uint64 fileSize);

    MCAPI void $clearUsedSizeOverride();

    MCAPI bool $supportsExtendSize() const;

    MCAPI bool $canExtendSize() const;

    MCAPI void $resetCanAttemptExtendSize();

    MCAPI ::Core::Result $getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;

    MCAPI void $attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    MCAPI void $preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );

    MCAPI uint64 $getAvailableUserStorageSize();

    MCAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
