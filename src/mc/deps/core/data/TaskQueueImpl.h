#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskQueueImpl {

public:
    // prevent constructor by default
    TaskQueueImpl& operator=(TaskQueueImpl const&) = delete;
    TaskQueueImpl(TaskQueueImpl const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Release\@?$Api\@$01UITaskQueue\@\@\@\@UEAAIXZ
     */
    virtual unsigned int Release();
    /**
     * @vftbl 2
     * @symbol ?QueryApi\@?$Api\@$01UITaskQueue\@\@\@\@UEAAJW4ApiId\@\@PEAPEAX\@Z
     */
    virtual long QueryApi(enum class ApiId, void**);
    /**
     * @vftbl 3
     * @symbol ?GetHandle\@TaskQueueImpl\@\@UEAAPEAUXTaskQueueObject\@\@XZ
     */
    virtual struct XTaskQueueObject* GetHandle();
    /**
     * @vftbl 4
     * @symbol ?GetPortContext\@TaskQueueImpl\@\@UEAAJW4XTaskQueuePort\@\@PEAPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long GetPortContext(enum class XTaskQueuePort, struct ITaskQueuePortContext**);
    /**
     * @vftbl 5
     * @symbol
     * ?RegisterWaitHandle\@TaskQueueImpl\@\@UEAAJW4XTaskQueuePort\@\@PEAX1P6AX1_N\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long
    RegisterWaitHandle(enum class XTaskQueuePort, void*, void*, void(__cdecl*)(void*, bool), struct XTaskQueueRegistrationToken*);
    /**
     * @vftbl 6
     * @symbol ?UnregisterWaitHandle\@TaskQueueImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl 7
     * @symbol
     * ?RegisterSubmitCallback\@TaskQueueImpl\@\@UEAAJPEAXP6AX0PEAUXTaskQueueObject\@\@W4XTaskQueuePort\@\@\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long
    RegisterSubmitCallback(void*, void(__cdecl*)(void*, struct XTaskQueueObject*, enum class XTaskQueuePort), struct XTaskQueueRegistrationToken*);
    /**
     * @vftbl 8
     * @symbol ?UnregisterSubmitCallback\@TaskQueueImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterSubmitCallback(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl 9
     * @symbol ?CanTerminate\@TaskQueueImpl\@\@UEAA_NXZ
     */
    virtual bool CanTerminate();
    /**
     * @vftbl 10
     * @symbol ?CanClose\@TaskQueueImpl\@\@UEAA_NXZ
     */
    virtual bool CanClose();
    /**
     * @vftbl 11
     * @symbol ?Terminate\@TaskQueueImpl\@\@UEAAJ_NPEAXP6AX1\@Z\@Z
     */
    virtual long Terminate(bool, void*, void(__cdecl*)(void*));
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?QueryApiImpl\@?$Api\@$01UITaskQueue\@\@\@\@MEAAPEAXW4ApiId\@\@\@Z
     */
    virtual void* QueryApiImpl(enum class ApiId);
    /**
     * @vftbl 14
     * @symbol ?RundownObject\@TaskQueueImpl\@\@MEAAXXZ
     */
    virtual void RundownObject();
    /**
     * @symbol ?Initialize\@TaskQueueImpl\@\@QEAAJPEAUXTaskQueuePortObject\@\@0\@Z
     */
    MCAPI long Initialize(struct XTaskQueuePortObject*, struct XTaskQueuePortObject*);
    /**
     * @symbol ?Initialize\@TaskQueueImpl\@\@QEAAJW4XTaskQueueDispatchMode\@\@0_N1\@Z
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode, enum class XTaskQueueDispatchMode, bool, bool);
    /**
     * @symbol ??0TaskQueueImpl\@\@QEAA\@XZ
     */
    MCAPI TaskQueueImpl();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?OnTerminationCallback\@TaskQueueImpl\@\@CAXPEAX\@Z
     */
    MCAPI static void OnTerminationCallback(void*);
    // NOLINTEND
};
