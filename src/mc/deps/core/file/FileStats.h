#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk954c4f;
    ::ll::UntypedStorage<8, 8> mUnk34e919;
    ::ll::UntypedStorage<8, 8> mUnk9b7184;
    ::ll::UntypedStorage<8, 8> mUnk466072;
    ::ll::UntypedStorage<8, 8> mUnkfe28ac;
    ::ll::UntypedStorage<8, 8> mUnk6d82ec;
    ::ll::UntypedStorage<8, 8> mUnk6a1655;
    ::ll::UntypedStorage<8, 8> mUnkc48866;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStats& operator=(FileStats const&);
    FileStats(FileStats const&);

public:
    // member functions
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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace Core
