#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskQueueImpl {

public:
    // prevent constructor by default
    TaskQueueImpl& operator=(TaskQueueImpl const&) = delete;
    TaskQueueImpl(TaskQueueImpl const&)            = delete;

public:
    /**
     * @vftbl 3
     * @symbol ?GetHandle\@TaskQueueImpl\@\@UEAAPEAUXTaskQueueObject\@\@XZ
     */
    virtual struct XTaskQueueObject* GetHandle(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?GetPortContext\@TaskQueueImpl\@\@UEAAJW4XTaskQueuePort\@\@PEAPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long GetPortContext(enum class XTaskQueuePort, struct ITaskQueuePortContext**); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?RegisterWaitHandle\@TaskQueueImpl\@\@UEAAJW4XTaskQueuePort\@\@PEAX1P6AX1_N\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long
    RegisterWaitHandle(enum class XTaskQueuePort, void*, void*, void (*)(void*, bool), struct XTaskQueueRegistrationToken*); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?UnregisterWaitHandle\@TaskQueueImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?RegisterSubmitCallback\@TaskQueueImpl\@\@UEAAJPEAXP6AX0PEAUXTaskQueueObject\@\@W4XTaskQueuePort\@\@\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long
    RegisterSubmitCallback(void*, void (*)(void*, struct XTaskQueueObject*, enum class XTaskQueuePort), struct XTaskQueueRegistrationToken*); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?UnregisterSubmitCallback\@TaskQueueImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterSubmitCallback(struct XTaskQueueRegistrationToken); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?CanTerminate\@TaskQueueImpl\@\@UEAA_NXZ
     */
    virtual bool CanTerminate(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?CanClose\@TaskQueueImpl\@\@UEAA_NXZ
     */
    virtual bool CanClose(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?Terminate\@TaskQueueImpl\@\@UEAAJ_NPEAXP6AX1\@Z\@Z
     */
    virtual long Terminate(bool, void*, void (*)(void*)); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?RundownObject\@TaskQueueImpl\@\@MEAAXXZ
     */
    virtual void RundownObject(); // NOLINT
    /**
     * @symbol ?Initialize\@TaskQueueImpl\@\@QEAAJPEAUXTaskQueuePortObject\@\@0\@Z
     */
    MCAPI long Initialize(struct XTaskQueuePortObject*, struct XTaskQueuePortObject*); // NOLINT
    /**
     * @symbol ?Initialize\@TaskQueueImpl\@\@QEAAJW4XTaskQueueDispatchMode\@\@0_N1\@Z
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode, enum class XTaskQueueDispatchMode, bool, bool); // NOLINT
    /**
     * @symbol ??0TaskQueueImpl\@\@QEAA\@XZ
     */
    MCAPI TaskQueueImpl(); // NOLINT

    // private:
    /**
     * @symbol ?OnTerminationCallback\@TaskQueueImpl\@\@CAXPEAX\@Z
     */
    MCAPI static void OnTerminationCallback(void*); // NOLINT

private:
};
