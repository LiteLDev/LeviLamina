#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

class ThreadPool {
public:
    // prevent constructor by default
    ThreadPool& operator=(ThreadPool const&);
    ThreadPool(ThreadPool const&);

public:
    // NOLINTBEGIN
    MCAPI long Initialize(void*, void (*)(void*, struct OS::ThreadPoolActionStatus&));

    MCAPI void Submit();

    MCAPI void Terminate();

    MCAPI ThreadPool();

    MCAPI ~ThreadPool();

    // NOLINTEND
};

}; // namespace OS
