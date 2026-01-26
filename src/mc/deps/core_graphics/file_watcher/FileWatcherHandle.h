#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce::detail { struct FileWatcherHandleInternal; }
// clang-format on

namespace mce {

class FileWatcherHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::detail::FileWatcherHandleInternal>> mFileWatcherHandleInternal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace mce
