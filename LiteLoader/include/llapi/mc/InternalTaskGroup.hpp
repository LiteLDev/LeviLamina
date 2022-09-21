/**
 * @file  MC/InternalTaskGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InternalTaskGroup.
 *
 */
class InternalTaskGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALTASKGROUP
public:
    class InternalTaskGroup& operator=(class InternalTaskGroup const &) = delete;
    InternalTaskGroup(class InternalTaskGroup const &) = delete;
    InternalTaskGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InternalTaskGroup();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   796503751
     * @vftbl  5
     * @symbol ?getState@InternalTaskGroup@@UEBA?AW4TaskGroupState@@XZ
     */
    virtual enum TaskGroupState getState() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERNALTASKGROUP
    /**
     * @hash   1190151028
     * @symbol ?processCoroutines@InternalTaskGroup@@UEAAXXZ
     */
    MCVAPI void processCoroutines();
    /**
     * @hash   -1975358265
     * @symbol ?queue@InternalTaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     */
    MCVAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @hash   -481468940
     * @symbol ?queueSync@InternalTaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     */
    MCVAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @hash   -1309985837
     * @symbol ?requeueTask@InternalTaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
     */
    MCVAPI void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @hash   1487363012
     * @symbol ?taskComplete@InternalTaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z
     */
    MCVAPI void taskComplete(class gsl::not_null<class BackgroundTaskBase *>);
    /**
     * @hash   -183733116
     * @symbol ?taskRegister@InternalTaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     */
    MCVAPI void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
#endif

};