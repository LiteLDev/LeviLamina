#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"

class InternalTaskGroup {

public:
    // prevent constructor by default
    InternalTaskGroup& operator=(InternalTaskGroup const&) = delete;
    InternalTaskGroup(InternalTaskGroup const&)            = delete;
    InternalTaskGroup()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getState\@InternalTaskGroup\@\@UEBA?AW4TaskGroupState\@\@XZ
     */
    virtual enum class TaskGroupState getState() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERNALTASKGROUP
    /**
     * @symbol ?processCoroutines\@InternalTaskGroup\@\@UEAAXXZ
     */
    MCVAPI void processCoroutines(); // NOLINT
    /**
     * @symbol
     * ?queue\@InternalTaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queue(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult(void)>&&, class std::function<void(void)>&&); // NOLINT
    /**
     * @symbol
     * ?queueSync\@InternalTaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    MCVAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queueSync(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult(void)>&&); // NOLINT
    /**
     * @symbol ?requeueTask\@InternalTaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCVAPI void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool); // NOLINT
    /**
     * @symbol ?taskComplete\@InternalTaskGroup\@\@UEAAXV?$not_null\@PEAVBackgroundTaskBase\@\@\@gsl\@\@\@Z
     */
    MCVAPI void taskComplete(class gsl::not_null<class BackgroundTaskBase*>); // NOLINT
    /**
     * @symbol ?taskRegister\@InternalTaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCVAPI void taskRegister(class std::shared_ptr<class BackgroundTaskBase>); // NOLINT
#endif
};
