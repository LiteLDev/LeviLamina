#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileStorageArea.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystem_windows; }
namespace Core { class PathView; }
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

    // vIndex: 13
    virtual bool supportsExtendSize() const /*override*/;

    // vIndex: 14
    virtual bool canExtendSize() const /*override*/;

    // vIndex: 15
    virtual void resetCanAttemptExtendSize() /*override*/;

    // vIndex: 16
    virtual ::Core::Result getExtendSizeThreshold(uint64& outExtendSizeThreshold) const /*override*/;

    // vIndex: 17
    virtual void
    attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback) /*override*/;

    // vIndex: 18
    virtual void preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    ) /*override*/;

    // vIndex: 19
    virtual uint64 getAvailableUserStorageSize() /*override*/;

    // vIndex: 33
    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo() /*override*/;

    // vIndex: 35
    virtual bool shouldRecordFileError(::Core::PathView path, ::std::error_code error) const /*override*/;

    // vIndex: 0
    virtual ~StorageArea_windows() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $supportsSizeQuery() const;

    MCNAPI uint64 $getTotalSize() const;

    MCNAPI ::Core::Result $getUsedSize(uint64& outUsedSize);

    MCNAPI void $setUsedSizeOverride(uint64 fileSize);

    MCNAPI void $clearUsedSizeOverride();

    MCNAPI bool $supportsExtendSize() const;

    MCNAPI bool $canExtendSize() const;

    MCNAPI void $resetCanAttemptExtendSize();

    MCNAPI ::Core::Result $getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;

    MCNAPI void $attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);

    MCNAPI void $preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );

    MCNAPI uint64 $getAvailableUserStorageSize();

    MCNAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();

    MCNAPI bool $shouldRecordFileError(::Core::PathView path, ::std::error_code error) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
