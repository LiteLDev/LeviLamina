/**
 * @file  TaskQueuePortImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1089225769
     * @vftbl  3
     * @symbol  ?GetHandle\@TaskQueuePortImpl\@\@UEAAPEAUXTaskQueuePortObject\@\@XZ
     */
    virtual struct XTaskQueuePortObject * GetHandle();
    /**
     * @hash   1499915262
     * @vftbl  4
     * @symbol  ?QueueItem\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@IPEAXP6AX1_N\@Z\@Z
     */
    virtual long QueueItem(struct ITaskQueuePortContext *, unsigned int, void *, void ( *)(void *, bool));
    /**
     * @hash   545269043
     * @vftbl  5
     * @symbol  ?RegisterWaitHandle\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@PEAX1P6AX1_N\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /**
     * @hash   -1768932321
     * @vftbl  6
     * @symbol  ?UnregisterWaitHandle\@TaskQueuePortImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @hash   1893366314
     * @vftbl  7
     * @symbol  ?PrepareTerminate\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@PEAXP6AX1\@ZPEAPEAX\@Z
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void ( *)(void *), void **);
    /**
     * @hash   366976208
     * @vftbl  8
     * @symbol  ?CancelTermination\@TaskQueuePortImpl\@\@UEAAXPEAX\@Z
     */
    virtual void CancelTermination(void *);
    /**
     * @hash   1996603369
     * @vftbl  9
     * @symbol  ?Terminate\@TaskQueuePortImpl\@\@UEAAXPEAX\@Z
     */
    virtual void Terminate(void *);
    /**
     * @hash   427361529
     * @vftbl  10
     * @symbol  ?Attach\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long Attach(struct ITaskQueuePortContext *);
    /**
     * @hash   1833850291
     * @vftbl  11
     * @symbol  ?Detach\@TaskQueuePortImpl\@\@UEAAXPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual void Detach(struct ITaskQueuePortContext *);
    /**
     * @hash   -1905626275
     * @vftbl  12
     * @symbol  ?DrainOneItem\@TaskQueuePortImpl\@\@UEAA_NXZ
     */
    virtual bool DrainOneItem();
    /**
     * @hash   -72246789
     * @vftbl  13
     * @symbol  ?Wait\@TaskQueuePortImpl\@\@UEAA_NPEAUITaskQueuePortContext\@\@I\@Z
     */
    virtual bool Wait(struct ITaskQueuePortContext *, unsigned int);
    /**
     * @hash   -1406983825
     * @vftbl  14
     * @symbol  ?IsEmpty\@TaskQueuePortImpl\@\@UEAA_NXZ
     */
    virtual bool IsEmpty();
    /**
     * @hash   -842508762
     * @vftbl  15
     * @symbol  ?SuspendTermination\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext *);
    /**
     * @hash   1232872543
     * @vftbl  16
     * @symbol  ?ResumeTermination\@TaskQueuePortImpl\@\@UEAAXPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual void ResumeTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  17
     * @symbol  __unk_destructor_17
     */
    virtual ~TaskQueuePortImpl();
    /**
     * @hash   1634780676
     * @symbol  ?Initialize\@TaskQueuePortImpl\@\@QEAAJW4XTaskQueueDispatchMode\@\@\@Z
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode);
    /**
     * @hash   -32590423
     * @symbol  ??0TaskQueuePortImpl\@\@QEAA\@XZ
     */
    MCAPI TaskQueuePortImpl();

//private:
    /**
     * @hash   -503713563
     * @symbol  ?AppendEntry\@TaskQueuePortImpl\@\@AEAA_NAEBUQueueEntry\@1\@_K_N\@Z
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, unsigned __int64, bool);
    /**
     * @hash   -1395964361
     * @symbol  ?AppendWaitRegistrationEntry\@TaskQueuePortImpl\@\@AEAA_NPEAUWaitRegistration\@1\@_N\@Z
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *, bool);
    /**
     * @hash   -166014842
     * @symbol  ?CancelPendingEntries\@TaskQueuePortImpl\@\@AEAAXPEAUITaskQueuePortContext\@\@_N\@Z
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);
    /**
     * @hash   2137913099
     * @symbol  ?InitializeWaitRegistration\@TaskQueuePortImpl\@\@AEAAJPEAUWaitRegistration\@1\@\@Z
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);
    /**
     * @hash   -523910972
     * @symbol  ?ScheduleTermination\@TaskQueuePortImpl\@\@AEAAXPEAUTerminationEntry\@1\@\@Z
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);
    /**
     * @hash   -804036253
     * @symbol  ?SubmitPendingCallback\@TaskQueuePortImpl\@\@AEAAXXZ
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @hash   1856345362
     * @symbol  ?EraseQueue\@TaskQueuePortImpl\@\@CAXPEAV?$LocklessQueue\@UQueueEntry\@TaskQueuePortImpl\@\@\@\@\@Z
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);
    /**
     * @hash   -2047415324
     * @symbol  ?WaitCallback\@TaskQueuePortImpl\@\@CAXPEAU_TP_CALLBACK_INSTANCE\@\@PEAXPEAU_TP_WAIT\@\@K\@Z
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

private:

};