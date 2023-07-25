#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

class ThreadPool {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OS_THREADPOOL
public:
    ThreadPool& operator=(ThreadPool const&) = delete;
    ThreadPool(ThreadPool const&)            = delete;
#endif

public:
    /**
     * @symbol ?Initialize\@ThreadPool\@OS\@\@QEAAJPEAXP6AX0AEAUThreadPoolActionStatus\@2\@\@Z\@Z
     */
    MCAPI long Initialize(void*, void (*)(void*, struct OS::ThreadPoolActionStatus&));
    /**
     * @symbol ?Submit\@ThreadPool\@OS\@\@QEAAXXZ
     */
    MCAPI void Submit();
    /**
     * @symbol ?Terminate\@ThreadPool\@OS\@\@QEAAXXZ
     */
    MCAPI void Terminate();
    /**
     * @symbol ??0ThreadPool\@OS\@\@QEAA\@XZ
     */
    MCAPI ThreadPool();
    /**
     * @symbol ??1ThreadPool\@OS\@\@QEAA\@XZ
     */
    MCAPI ~ThreadPool();
};

}; // namespace OS
