#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskStartInfoEx.h"

class InternalTaskGroup : public ::IBackgroundTaskOwner {

public:
    // prevent constructor by default
    InternalTaskGroup& operator=(InternalTaskGroup const&) = delete;
    InternalTaskGroup(InternalTaskGroup const&)            = delete;
    InternalTaskGroup()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?getState\@InternalTaskGroup\@\@UEBA?AW4TaskGroupState\@\@XZ
     */
    virtual enum class TaskGroupState getState() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERNALTASKGROUP
    /**
     * @symbol ?processCoroutines\@InternalTaskGroup\@\@UEAAXXZ
     */
    MCVAPI void processCoroutines();
    /**
     * @symbol
     * ?queue\@InternalTaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@$$QEAV?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    queue(struct TaskStartInfoEx<void> const&, std::function<class TaskResult(void)>&&, std::function<void(void)>&&);
    /**
     * @symbol
     * ?queueSync\@InternalTaskGroup\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@X\@Threading\@Bedrock\@\@\@std\@\@AEBU?$TaskStartInfoEx\@X\@\@$$QEAV?$function\@$$A6A?AVTaskResult\@\@XZ\@3\@\@Z
     */
    MCVAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
           queueSync(struct TaskStartInfoEx<void> const&, std::function<class TaskResult(void)>&&);
    /**
     * @symbol ?requeueTask\@InternalTaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@_N\@Z
     */
    MCVAPI void requeueTask(std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @symbol ?taskComplete\@InternalTaskGroup\@\@UEAAXV?$not_null\@PEAVBackgroundTaskBase\@\@\@gsl\@\@\@Z
     */
    MCVAPI void taskComplete(class gsl::not_null<class BackgroundTaskBase*>);
    /**
     * @symbol ?taskRegister\@InternalTaskGroup\@\@UEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCVAPI void taskRegister(std::shared_ptr<class BackgroundTaskBase>);
#endif
    // NOLINTEND
};
