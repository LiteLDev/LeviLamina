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

};

}
