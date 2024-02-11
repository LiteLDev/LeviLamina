#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // prevent constructor by default
    FileStats& operator=(FileStats const&);
    FileStats(FileStats const&);

public:
    // NOLINTBEGIN
    // symbol: ??0FileStats@Core@@QEAA@XZ
    MCAPI FileStats();

    // symbol: ?addReadOperation@FileStats@Core@@QEAAX_N_K@Z
    MCAPI void addReadOperation(bool succeeded, uint64 numBytesRead);

    // symbol: ?addReadWriteOperation@FileStats@Core@@QEAAX_N_K1@Z
    MCAPI void addReadWriteOperation(bool succeeded, uint64 numBytesRead, uint64 numBytesWritten);

    // symbol: ?addWriteOperation@FileStats@Core@@QEAAX_N_K@Z
    MCAPI void addWriteOperation(bool succeeded, uint64 numBytesWritten);

    // symbol: ?getAllocatedUsedFileSystemSize@FileStats@Core@@QEBA_KXZ
    MCAPI uint64 getAllocatedUsedFileSystemSize() const;

    // symbol: ?getUsedFileSystemSize@FileStats@Core@@QEBA_KXZ
    MCAPI uint64 getUsedFileSystemSize() const;

    // symbol: ?notifyChangeInFileSize@FileStats@Core@@QEAAX_J0@Z
    MCAPI void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    // symbol: ?setFileSystemUsedSize@FileStats@Core@@QEAAX_J0@Z
    MCAPI void setFileSystemUsedSize(int64 newSize, int64 newAllocatedSize);

    // NOLINTEND
};

}; // namespace Core
