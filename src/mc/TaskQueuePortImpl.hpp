/**
 * @file  TaskQueuePortImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  3
     * @symbol  ?GetHandle\@TaskQueuePortImpl\@\@UEAAPEAUXTaskQueuePortObject\@\@XZ
     */
    virtual struct XTaskQueuePortObject * GetHandle();
    /**
     * @vftbl  4
     * @symbol  ?QueueItem\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@IPEAXP6AX1_N\@Z\@Z
     */
    virtual long QueueItem(struct ITaskQueuePortContext *, unsigned int, void *, void ( *)(void *, bool));
    /**
     * @vftbl  5
     * @symbol  ?RegisterWaitHandle\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@PEAX1P6AX1_N\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /**
     * @vftbl  6
     * @symbol  ?UnregisterWaitHandle\@TaskQueuePortImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl  7
     * @symbol  ?PrepareTerminate\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@PEAXP6AX1\@ZPEAPEAX\@Z
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void ( *)(void *), void **);
    /**
     * @vftbl  8
     * @symbol  ?CancelTermination\@TaskQueuePortImpl\@\@UEAAXPEAX\@Z
     */
    virtual void CancelTermination(void *);
    /**
     * @vftbl  9
     * @symbol  ?Terminate\@TaskQueuePortImpl\@\@UEAAXPEAX\@Z
     */
    virtual void Terminate(void *);
    /**
     * @vftbl  10
     * @symbol  ?Attach\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long Attach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  11
     * @symbol  ?Detach\@TaskQueuePortImpl\@\@UEAAXPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual void Detach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  12
     * @symbol  ?DrainOneItem\@TaskQueuePortImpl\@\@UEAA_NXZ
     */
    virtual bool DrainOneItem();
    /**
     * @vftbl  13
     * @symbol  ?Wait\@TaskQueuePortImpl\@\@UEAA_NPEAUITaskQueuePortContext\@\@I\@Z
     */
    virtual bool Wait(struct ITaskQueuePortContext *, unsigned int);
    /**
     * @vftbl  14
     * @symbol  ?IsEmpty\@TaskQueuePortImpl\@\@UEAA_NXZ
     */
    virtual bool IsEmpty();
    /**
     * @vftbl  15
     * @symbol  ?SuspendTermination\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext *);
    /**
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
     * @symbol  ?Initialize\@TaskQueuePortImpl\@\@QEAAJW4XTaskQueueDispatchMode\@\@\@Z
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode);
    /**
     * @symbol  ??0TaskQueuePortImpl\@\@QEAA\@XZ
     */
    MCAPI TaskQueuePortImpl();

//private:
    /**
     * @symbol  ?AppendEntry\@TaskQueuePortImpl\@\@AEAA_NAEBUQueueEntry\@1\@_K_N\@Z
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, unsigned __int64, bool);
    /**
     * @symbol  ?AppendWaitRegistrationEntry\@TaskQueuePortImpl\@\@AEAA_NPEAUWaitRegistration\@1\@_N\@Z
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *, bool);
    /**
     * @symbol  ?CancelPendingEntries\@TaskQueuePortImpl\@\@AEAAXPEAUITaskQueuePortContext\@\@_N\@Z
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);
    /**
     * @symbol  ?InitializeWaitRegistration\@TaskQueuePortImpl\@\@AEAAJPEAUWaitRegistration\@1\@\@Z
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);
    /**
     * @symbol  ?ScheduleTermination\@TaskQueuePortImpl\@\@AEAAXPEAUTerminationEntry\@1\@\@Z
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);
    /**
     * @symbol  ?SubmitPendingCallback\@TaskQueuePortImpl\@\@AEAAXXZ
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @symbol  ?EraseQueue\@TaskQueuePortImpl\@\@CAXPEAV?$LocklessQueue\@UQueueEntry\@TaskQueuePortImpl\@\@\@\@\@Z
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);
    /**
     * @symbol  ?WaitCallback\@TaskQueuePortImpl\@\@CAXPEAU_TP_CALLBACK_INSTANCE\@\@PEAXPEAU_TP_WAIT\@\@K\@Z
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

private:

};