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
    MCAPI FileStats();

    MCAPI void addReadOperation(bool succeeded, uint64 numBytesRead);

    MCAPI void addReadWriteOperation(bool succeeded, uint64 numBytesRead, uint64 numBytesWritten);

    MCAPI void addWriteOperation(bool succeeded, uint64 numBytesWritten);

    MCAPI uint64 getAllocatedUsedFileSystemSize() const;

    MCAPI uint64 getUsedFileSystemSize() const;

    MCAPI void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);

    MCAPI void setFileSystemUsedSize(int64 newSize, int64 newAllocatedSize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Core
