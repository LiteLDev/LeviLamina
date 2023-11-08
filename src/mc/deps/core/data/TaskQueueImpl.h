#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ApiId.h"
#include "mc/enums/XTaskQueueDispatchMode.h"
#include "mc/enums/XTaskQueuePort.h"

class TaskQueueImpl {
public:
    // prevent constructor by default
    TaskQueueImpl& operator=(TaskQueueImpl const&);
    TaskQueueImpl(TaskQueueImpl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Release@?$Api@$01UITaskQueue@@@@UEAAIXZ
    virtual uint Release();

    // vIndex: 2, symbol: ?QueryApi@?$Api@$01UITaskQueue@@@@UEAAJW4ApiId@@PEAPEAX@Z
    virtual long QueryApi(::ApiId, void**);

    // vIndex: 3, symbol: ?GetHandle@TaskQueueImpl@@UEAAPEAUXTaskQueueObject@@XZ
    virtual struct XTaskQueueObject* GetHandle();

    // vIndex: 4, symbol: ?GetPortContext@TaskQueueImpl@@UEAAJW4XTaskQueuePort@@PEAPEAUITaskQueuePortContext@@@Z
    virtual long GetPortContext(::XTaskQueuePort, struct ITaskQueuePortContext**);

    // vIndex: 5, symbol:
    // ?RegisterWaitHandle@TaskQueueImpl@@UEAAJW4XTaskQueuePort@@PEAX1P6AX1_N@ZPEAUXTaskQueueRegistrationToken@@@Z
    virtual long
    RegisterWaitHandle(::XTaskQueuePort, void*, void*, void (*)(void*, bool), struct XTaskQueueRegistrationToken*);

    // vIndex: 6, symbol: ?UnregisterWaitHandle@TaskQueueImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);

    // vIndex: 7, symbol:
    // ?RegisterSubmitCallback@TaskQueueImpl@@UEAAJPEAXP6AX0PEAUXTaskQueueObject@@W4XTaskQueuePort@@@ZPEAUXTaskQueueRegistrationToken@@@Z
    virtual long
    RegisterSubmitCallback(void*, void (*)(void*, struct XTaskQueueObject*, ::XTaskQueuePort), struct XTaskQueueRegistrationToken*);

    // vIndex: 8, symbol: ?UnregisterSubmitCallback@TaskQueueImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
    virtual void UnregisterSubmitCallback(struct XTaskQueueRegistrationToken);

    // vIndex: 9, symbol: ?CanTerminate@TaskQueueImpl@@UEAA_NXZ
    virtual bool CanTerminate();

    // vIndex: 10, symbol: ?CanClose@TaskQueueImpl@@UEAA_NXZ
    virtual bool CanClose();

    // vIndex: 11, symbol: ?Terminate@TaskQueueImpl@@UEAAJ_NPEAXP6AX1@Z@Z
    virtual long Terminate(bool, void*, void (*)(void*));

    // vIndex: 12, symbol: __gen_??1TaskQueueImpl@@UEAA@XZ
    virtual ~TaskQueueImpl() = default;

    // vIndex: 13, symbol: ?QueryApiImpl@?$Api@$01UITaskQueue@@@@MEAAPEAXW4ApiId@@@Z
    virtual void* QueryApiImpl(::ApiId);

    // vIndex: 14, symbol: ?RundownObject@TaskQueueImpl@@MEAAXXZ
    virtual void RundownObject();

    // symbol: ?Initialize@TaskQueueImpl@@QEAAJPEAUXTaskQueuePortObject@@0@Z
    MCAPI long Initialize(struct XTaskQueuePortObject*, struct XTaskQueuePortObject*);

    // symbol: ?Initialize@TaskQueueImpl@@QEAAJW4XTaskQueueDispatchMode@@0_N1@Z
    MCAPI long Initialize(::XTaskQueueDispatchMode, ::XTaskQueueDispatchMode, bool, bool);

    // symbol: ??0TaskQueueImpl@@QEAA@XZ
    MCAPI TaskQueueImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnTerminationCallback@TaskQueueImpl@@CAXPEAX@Z
    MCAPI static void OnTerminationCallback(void*);

    // NOLINTEND
};
