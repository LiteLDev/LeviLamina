#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

struct ThreadPool {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Initialize(void*, void (*)(void*, ::OS::ThreadPoolActionStatus&));

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
