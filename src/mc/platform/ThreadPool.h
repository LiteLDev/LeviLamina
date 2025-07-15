#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

class ThreadPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8fbfec;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadPool& operator=(ThreadPool const&);
    ThreadPool(ThreadPool const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Initialize(void* context, void (*callback)(void*, ::OS::ThreadPoolActionStatus&));

    MCNAPI void Submit();

    MCNAPI void Terminate();

    MCNAPI ThreadPool();

    MCNAPI ~ThreadPool();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OS
