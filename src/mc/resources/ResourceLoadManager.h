#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ResourceLoadManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourceLoadManager inner types declare
    // clang-format off
    class ResourceLoadTaskGroup;
    // clang-format on

    // ResourceLoadManager inner types define
    class ResourceLoadTaskGroup {
    public:
        // prevent constructor by default
        ResourceLoadTaskGroup& operator=(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?queue@ResourceLoadTaskGroup@ResourceLoadManager@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$function@$$A6A?AVTaskResult@@XZ@4@V?$function@$$A6AXXZ@4@I@Z
        MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
            std::function<class TaskResult()> threadedCallback,
            std::function<void()>             mainThreadCallback,
            uint                              taskPriority
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);
    ResourceLoadManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ResourceLoadManager@@UEAA@XZ
    virtual ~ResourceLoadManager() = default;

    // symbol: ?cancel@ResourceLoadManager@@QEAAXW4ResourceLoadType@@@Z
    MCAPI void cancel(::ResourceLoadType resourceLoadType);

    // symbol:
    // ?queue@ResourceLoadManager@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@W4ResourceLoadType@@V?$function@$$A6A?AVTaskResult@@XZ@3@V?$function@$$A6AXXZ@3@I@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
        ::ResourceLoadType                resourceLoadType,
        std::function<class TaskResult()> threadedCallback,
        std::function<void()>             mainThreadCallback,
        uint                              taskPriority
    );

    // symbol: ?queueChild@ResourceLoadManager@@SAXV?$function@$$A6A?AVTaskResult@@XZ@std@@V?$function@$$A6AXXZ@3@I@Z
    MCAPI static void queueChild(
        std::function<class TaskResult()> threadedCallback,
        std::function<void()>             mainThreadCallback,
        uint                              taskPriority
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_prepareTaskGroupToRunAgain@ResourceLoadManager@@AEAAXV?$not_null@PEAVResourceLoadTaskGroup@ResourceLoadManager@@@gsl@@@Z
    MCAPI void
    _prepareTaskGroupToRunAgain(gsl::not_null<class ResourceLoadManager::ResourceLoadTaskGroup*> resourceLoadTaskGroup);

    // symbol:
    // ?_wrapMainThreadCallback@ResourceLoadManager@@CA?AV?$function@$$A6AXXZ@std@@AEAVResourceLoadTaskGroup@1@$$QEAV23@@Z
    MCAPI static std::function<void()> _wrapMainThreadCallback(
        class ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        std::function<void()>&&                           mainThreadCallback
    );

    // symbol:
    // ?_wrapTaskCallback@ResourceLoadManager@@CA?AV?$function@$$A6A?AVTaskResult@@XZ@std@@AEAVResourceLoadTaskGroup@1@$$QEAV23@@Z
    MCAPI static std::function<class TaskResult()> _wrapTaskCallback(
        class ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        std::function<class TaskResult()>&&               threadedCallback
    );

    // NOLINTEND
};
