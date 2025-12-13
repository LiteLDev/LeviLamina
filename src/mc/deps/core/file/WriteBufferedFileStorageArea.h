#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStorageArea.h"
#include "mc/deps/core/file/PathBuffer.h"

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
    virtual ~WriteBufferedFileStorageArea() /*override*/ = default;

    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    virtual bool supportsSizeQuery() const /*override*/;

    virtual uint64 getTotalSize() const /*override*/;

    virtual ::Core::Result getUsedSize(uint64&) /*override*/;

    virtual uint64 getTransactionWriteSizeLimit() const /*override*/;

    virtual bool handlesPendingWrites() const /*override*/;

    virtual void informPendingWriteSize(uint64 numBytesWritePending, bool const fromResourcePack) /*override*/;

    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const /*override*/;

    virtual void informStorageAreaCopy(uint64 storageAreaSize) /*override*/;

    virtual ::Core::Result setSaveDataIcon(::Core::PathView) /*override*/;

    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const /*override*/;

    virtual void flushImmediately() /*override*/;

    virtual void enableFlushToDisk(bool) /*override*/;

    virtual bool checkCorrupt(bool handleCorruption) /*override*/;

    virtual void _onTeardown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
