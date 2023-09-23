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
    MCAPI void addReadOperation(bool, uint64);

    // symbol: ?addReadWriteOperation@FileStats@Core@@QEAAX_N_K1@Z
    MCAPI void addReadWriteOperation(bool, uint64, uint64);

    // symbol: ?addWriteOperation@FileStats@Core@@QEAAX_N_K@Z
    MCAPI void addWriteOperation(bool, uint64);

    // symbol: ?getAllocatedUsedFileSystemSize@FileStats@Core@@QEBA_KXZ
    MCAPI uint64 getAllocatedUsedFileSystemSize() const;

    // symbol: ?getUsedFileSystemSize@FileStats@Core@@QEBA_KXZ
    MCAPI uint64 getUsedFileSystemSize() const;

    // symbol: ?notifyChangeInFileSize@FileStats@Core@@QEAAX_J0@Z
    MCAPI void notifyChangeInFileSize(int64, int64);

    // symbol: ?setFileSystemUsedSize@FileStats@Core@@QEAAX_J0@Z
    MCAPI void setFileSystemUsedSize(int64, int64);

    // NOLINTEND
};

}; // namespace Core
