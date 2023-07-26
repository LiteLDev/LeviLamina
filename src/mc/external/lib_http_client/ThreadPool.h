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
    ThreadPool& operator=(ThreadPool const&) = delete;
    ThreadPool(ThreadPool const&)            = delete;

public:
    /**
     * @symbol ?Initialize\@ThreadPool\@OS\@\@QEAAJPEAXP6AX0AEAUThreadPoolActionStatus\@2\@\@Z\@Z
     */
    MCAPI long Initialize(void*, void (*)(void*, struct OS::ThreadPoolActionStatus&)); // NOLINT
    /**
     * @symbol ?Submit\@ThreadPool\@OS\@\@QEAAXXZ
     */
    MCAPI void Submit(); // NOLINT
    /**
     * @symbol ?Terminate\@ThreadPool\@OS\@\@QEAAXXZ
     */
    MCAPI void Terminate(); // NOLINT
    /**
     * @symbol ??0ThreadPool\@OS\@\@QEAA\@XZ
     */
    MCAPI ThreadPool(); // NOLINT
    /**
     * @symbol ??1ThreadPool\@OS\@\@QEAA\@XZ
     */
    MCAPI ~ThreadPool(); // NOLINT
};

}; // namespace OS
