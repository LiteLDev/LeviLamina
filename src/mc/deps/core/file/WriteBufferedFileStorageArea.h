#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStorageArea.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class WriteBufferedFileStorageArea : public ::Core::FileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb8f56f;
    ::ll::UntypedStorage<8, 16> mUnk847197;
    ::ll::UntypedStorage<8, 64> mUnk889f10;
    ::ll::UntypedStorage<8, 80> mUnkba13b1;
    ::ll::UntypedStorage<8, 24> mUnk7cfba8;
    ::ll::UntypedStorage<1, 1>  mUnk13aec3;
    ::ll::UntypedStorage<1, 1>  mUnk61c0ed;
    ::ll::UntypedStorage<1, 1>  mUnkafc03c;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteBufferedFileStorageArea& operator=(WriteBufferedFileStorageArea const&);
    WriteBufferedFileStorageArea(WriteBufferedFileStorageArea const&);
    WriteBufferedFileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WriteBufferedFileStorageArea() /*override*/ = default;

    // vIndex: 2
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    // vIndex: 3
    virtual bool supportsSizeQuery() const /*override*/;

    // vIndex: 4
    virtual uint64 getTotalSize() const /*override*/;

    // vIndex: 5
    virtual ::Core::Result getUsedSize(uint64&) /*override*/;

    // vIndex: 26
    virtual uint64 getTransactionWriteSizeLimit() const /*override*/;

    // vIndex: 9
    virtual bool handlesPendingWrites() const /*override*/;

    // vIndex: 10
    virtual void informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack) /*override*/;

    // vIndex: 11
    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const /*override*/;

    // vIndex: 12
    virtual void informStorageAreaCopy(uint64 storageAreaSize) /*override*/;

    // vIndex: 27
    virtual ::Core::Result setSaveDataIcon(::Core::PathView iconPath) /*override*/;

    // vIndex: 25
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const /*override*/;

    // vIndex: 22
    virtual void flushImmediately() /*override*/;

    // vIndex: 23
    virtual void enableFlushToDisk(bool) /*override*/;

    // vIndex: 24
    virtual bool checkCorrupt(bool handleCorruption) /*override*/;

    // vIndex: 34
    virtual void _onTeardown() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
