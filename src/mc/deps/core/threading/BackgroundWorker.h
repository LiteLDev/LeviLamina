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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isAsync@BackgroundWorker@@UEBA_NXZ
    virtual bool isAsync() const;

    // vIndex: 2, symbol: ?canTaskRunAgain@BackgroundWorker@@UEBA_NXZ
    virtual bool canTaskRunAgain() const;

    // symbol: ??1BackgroundWorker@@UEAA@XZ
    MCVAPI ~BackgroundWorker();

    // symbol:
    // ??0BackgroundWorker@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEBVOSThreadPriority@Threading@Bedrock@@V?$optional@_K@2@V?$optional@H@2@AEAVWorkerPool@@1@Z
    MCAPI BackgroundWorker(
        std::string,
        bool,
        class Bedrock::Threading::OSThreadPriority const&,
        std::optional<uint64>,
        std::optional<int>,
        class WorkerPool&,
        bool
    );

    // symbol: ?queue@BackgroundWorker@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase>);

    // symbol: ?start@BackgroundWorker@@QEAAXXZ
    MCAPI void start();

    // symbol: ?wake@BackgroundWorker@@QEAAXXZ
    MCAPI void wake();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_processNextTask@BackgroundWorker@@AEAA_NXZ
    MCAPI bool _processNextTask();

    // symbol: ?_runOneTask@BackgroundWorker@@AEAA?AW4RunOneResult@1@XZ
    MCAPI ::BackgroundWorker::RunOneResult _runOneTask();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?gLocalWorkerMappingSingleton@BackgroundWorker@@0PEAV1@EA
    MCAPI static class BackgroundWorker* gLocalWorkerMappingSingleton;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $gLocalWorkerMappingSingleton() { return gLocalWorkerMappingSingleton; }

    // NOLINTEND
};
