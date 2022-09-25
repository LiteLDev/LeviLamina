/**
 * @file  TaskQueuePortImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskQueuePortImpl.
 *
 */
class TaskQueuePortImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL
public:
    class TaskQueuePortImpl& operator=(class TaskQueuePortImpl const &) = delete;
    TaskQueuePortImpl(class TaskQueuePortImpl const &) = delete;
#endif

public:
    /**
     * @hash   1867210007
     * @vftbl  3
     * @symbol ?GetHandle@TaskQueuePortImpl@@UEAAPEAUXTaskQueuePortObject@@XZ
     */
    virtual struct XTaskQueuePortObject * GetHandle();
    /**
     * @hash   739418302
     * @vftbl  4
     * @symbol ?QueueItem@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@IPEAXP6AX1_N@Z@Z
     */
    virtual long QueueItem(struct ITaskQueuePortContext *, unsigned int, void *, void ( *)(void *, bool));
    /**
     * @hash   -215227917
     * @vftbl  5
     * @symbol ?RegisterWaitHandle@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAX1P6AX1_N@ZPEAUXTaskQueueRegistrationToken@@@Z
     */
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /**
     * @hash   1765538015
     * @vftbl  6
     * @symbol ?UnregisterWaitHandle@TaskQueuePortImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @hash   1132869354
     * @vftbl  7
     * @symbol ?PrepareTerminate@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAXP6AX1@ZPEAPEAX@Z
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void ( *)(void *), void **);
    /**
     * @hash   -393520752
     * @vftbl  8
     * @symbol ?CancelTermination@TaskQueuePortImpl@@UEAAXPEAX@Z
     */
    virtual void CancelTermination(void *);
    /**
     * @hash   1236106409
     * @vftbl  9
     * @symbol ?Terminate@TaskQueuePortImpl@@UEAAXPEAX@Z
     */
    virtual void Terminate(void *);
    /**
     * @hash   -333135431
     * @vftbl  10
     * @symbol ?Attach@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     */
    virtual long Attach(struct ITaskQueuePortContext *);
    /**
     * @hash   1073353331
     * @vftbl  11
     * @symbol ?Detach@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     */
    virtual void Detach(struct ITaskQueuePortContext *);
    /**
     * @hash   1628844061
     * @vftbl  12
     * @symbol ?DrainOneItem@TaskQueuePortImpl@@UEAA_NXZ
     */
    virtual bool DrainOneItem();
    /**
     * @hash   -832743749
     * @vftbl  13
     * @symbol ?Wait@TaskQueuePortImpl@@UEAA_NPEAUITaskQueuePortContext@@I@Z
     */
    virtual bool Wait(struct ITaskQueuePortContext *, unsigned int);
    /**
     * @hash   2127486511
     * @vftbl  14
     * @symbol ?IsEmpty@TaskQueuePortImpl@@UEAA_NXZ
     */
    virtual bool IsEmpty();
    /**
     * @hash   -1603005722
     * @vftbl  15
     * @symbol ?SuspendTermination@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext *);
    /**
     * @hash   472375583
     * @vftbl  16
     * @symbol ?ResumeTermination@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     */
    virtual void ResumeTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  17
     * @symbol __unk_destructor_17
     */
    virtual ~TaskQueuePortImpl();
    /**
     * @hash   874283716
     * @symbol ?Initialize@TaskQueuePortImpl@@QEAAJW4XTaskQueueDispatchMode@@@Z
     */
    MCAPI long Initialize(enum XTaskQueueDispatchMode);
    /**
     * @hash   -793087383
     * @symbol ??0TaskQueuePortImpl@@QEAA@XZ
     */
    MCAPI TaskQueuePortImpl();

//private:
    /**
     * @hash   -1264210523
     * @symbol ?AppendEntry@TaskQueuePortImpl@@AEAA_NAEBUQueueEntry@1@_K_N@Z
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, unsigned __int64, bool);
    /**
     * @hash   2138505975
     * @symbol ?AppendWaitRegistrationEntry@TaskQueuePortImpl@@AEAA_NPEAUWaitRegistration@1@_N@Z
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *, bool);
    /**
     * @hash   -926511802
     * @symbol ?CancelPendingEntries@TaskQueuePortImpl@@AEAAXPEAUITaskQueuePortContext@@_N@Z
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);
    /**
     * @hash   1377416139
     * @symbol ?InitializeWaitRegistration@TaskQueuePortImpl@@AEAAJPEAUWaitRegistration@1@@Z
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);
    /**
     * @hash   -1284407932
     * @symbol ?ScheduleTermination@TaskQueuePortImpl@@AEAAXPEAUTerminationEntry@1@@Z
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);
    /**
     * @hash   -1564533213
     * @symbol ?SubmitPendingCallback@TaskQueuePortImpl@@AEAAXXZ
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @hash   1095848402
     * @symbol ?EraseQueue@TaskQueuePortImpl@@CAXPEAV?$LocklessQueue@UQueueEntry@TaskQueuePortImpl@@@@@Z
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);
    /**
     * @hash   1487055012
     * @symbol ?WaitCallback@TaskQueuePortImpl@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

private:

};