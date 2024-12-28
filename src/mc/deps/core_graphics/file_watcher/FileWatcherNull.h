#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace mce {

class FileWatcherNull : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    FileWatcherNull& operator=(FileWatcherNull const&);
    FileWatcherNull(FileWatcherNull const&);
    FileWatcherNull();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileWatcherNull() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
