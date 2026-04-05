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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FileWatcherHandle& operator=(FileWatcherHandle const&);
    FileWatcherHandle(FileWatcherHandle const&);
    FileWatcherHandle();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::mce::FileWatcherHandle& operator=(::mce::FileWatcherHandle&&);

    MCAPI ~FileWatcherHandle();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace mce
