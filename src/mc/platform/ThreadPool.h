#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

struct ThreadPool {
public:
    // prevent constructor by default
    ThreadPool& operator=(ThreadPool const&);
    ThreadPool(ThreadPool const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI long Initialize(void*, void (*)(void*, ::OS::ThreadPoolActionStatus&));

    MCAPI void Submit();

    MCAPI void Terminate();

    MCAPI ThreadPool();

    MCAPI ~ThreadPool();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OS
