#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"
#include "mc/enums/TaskGroupState.h"

class InternalTaskGroup : public ::IBackgroundTaskOwner {
public:
    // prevent constructor by default
    InternalTaskGroup& operator=(InternalTaskGroup const&);
    InternalTaskGroup(InternalTaskGroup const&);
    InternalTaskGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InternalTaskGroup@@UEAA@XZ
    virtual ~InternalTaskGroup() = default;

    // vIndex: 1, symbol:
    // ?queue@InternalTaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
        struct TaskStartInfoEx<void> const& startInfo,
        std::function<class TaskResult()>&& task,
        std::function<void()>&&             callback
    );

    // vIndex: 2, symbol:
    // ?queueSync@InternalTaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueSync(struct TaskStartInfoEx<void> const& startInfo, std::function<class TaskResult()>&& task);

    // vIndex: 3, symbol: ?taskRegister@InternalTaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
    virtual void taskRegister(std::shared_ptr<class BackgroundTaskBase>);

    // vIndex: 4, symbol: ?requeueTask@InternalTaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
    virtual void requeueTask(std::shared_ptr<class BackgroundTaskBase>, bool);

    // vIndex: 5, symbol: ?getState@InternalTaskGroup@@UEBA?AW4TaskGroupState@@XZ
    virtual ::TaskGroupState getState() const;

    // vIndex: 6, symbol: ?processCoroutines@InternalTaskGroup@@UEAAXXZ
    virtual void processCoroutines();

    // vIndex: 7, symbol: ?taskComplete@InternalTaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z
    virtual void taskComplete(gsl::not_null<class BackgroundTaskBase*> task);

    // NOLINTEND
};
