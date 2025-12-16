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
    // prevent constructor by default
    FileWatcherHandle& operator=(FileWatcherHandle const&);
    FileWatcherHandle(FileWatcherHandle const&);
    FileWatcherHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD_C ::mce::FileWatcherHandle& operator=(::mce::FileWatcherHandle&&);

    MCAPI_C ~FileWatcherHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace mce
