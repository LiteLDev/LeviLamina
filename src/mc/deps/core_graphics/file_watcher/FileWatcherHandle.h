#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class FileWatcherHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkae7605;
    // NOLINTEND

public:
    // prevent constructor by default
    FileWatcherHandle& operator=(FileWatcherHandle const&);
    FileWatcherHandle(FileWatcherHandle const&);
    FileWatcherHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::mce::FileWatcherHandle& operator=(::mce::FileWatcherHandle&&);

    MCNAPI_C ~FileWatcherHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
