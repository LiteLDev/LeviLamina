#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mFilesDone;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mFilesSkipped;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mTotalFiles;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ZipProgress() = default;

    virtual void clear();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::ZipUtils
