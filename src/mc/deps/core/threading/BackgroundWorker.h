#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ITaskExecutionContext.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class BackgroundWorker : public ::ITaskExecutionContext {
public:
    // BackgroundWorker inner types define
    enum class RunOneResult {};

public:
    // prevent constructor by default
    BackgroundWorker& operator=(BackgroundWorker const&);
    BackgroundWorker(BackgroundWorker const&);
    BackgroundWorker();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BackgroundWorker@@UEAA@XZ
    virtual ~BackgroundWorker();

    // vIndex: 1, symbol: ?isAsync@BackgroundWorker@@UEBA_NXZ
    virtual bool isAsync() const;

    // vIndex: 2, symbol: ?canTaskRunAgain@BackgroundWorker@@UEBA_NXZ
    virtual bool canTaskRunAgain() const;

    // symbol:
    // ??0BackgroundWorker@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEBVOSThreadPriority@Threading@Bedrock@@V?$optional@_K@2@V?$optional@H@2@AEAVWorkerPool@@1@Z
    MCAPI BackgroundWorker(
        std::string                                       name,
        bool                                              async,
        class Bedrock::Threading::OSThreadPriority const& priority,
        std::optional<uint64>                             coreAffinity,
        std::optional<int>                                idealCore,
        class WorkerPool&                                 workerPool,
        bool                                              suppressProfiling
    );

    // symbol: ?getApproximateTaskCount@BackgroundWorker@@QEBA_KXZ
    MCAPI uint64 getApproximateTaskCount() const;

    // symbol: ?getThreadId@BackgroundWorker@@QEBA?AVid@thread@std@@XZ
    MCAPI std::thread::id getThreadId() const;

    // symbol: ?isIdle@BackgroundWorker@@QEBA_NXZ
    MCAPI bool isIdle() const;

    // symbol: ?processTaskSync@BackgroundWorker@@QEAA_NXZ
    MCAPI bool processTaskSync();

    // symbol: ?queue@BackgroundWorker@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase> task);

    // symbol: ?requestStop@BackgroundWorker@@QEAAX_N@Z
    MCAPI void requestStop(bool wait);

    // symbol: ?resetWorkerThreadID@BackgroundWorker@@QEAAXXZ
    MCAPI void resetWorkerThreadID();

    // symbol: ?resortPriorityQueue@BackgroundWorker@@QEAAXXZ
    MCAPI void resortPriorityQueue();

    // symbol: ?start@BackgroundWorker@@QEAAXXZ
    MCAPI void start();

    // symbol: ?wake@BackgroundWorker@@QEAAXXZ
    MCAPI void wake();

    // symbol: ?getLocal@BackgroundWorker@@SAPEAV1@XZ
    MCAPI static class BackgroundWorker* getLocal();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_processNextTask@BackgroundWorker@@AEAA_NXZ
    MCAPI bool _processNextTask();

    // symbol: ?_runOneTask@BackgroundWorker@@AEAA?AW4RunOneResult@1@XZ
    MCAPI ::BackgroundWorker::RunOneResult _runOneTask();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?gLocalWorkerMappingSingleton@BackgroundWorker@@0PEAV1@EA
    MCAPI static class BackgroundWorker* gLocalWorkerMappingSingleton;

    // NOLINTEND
};
