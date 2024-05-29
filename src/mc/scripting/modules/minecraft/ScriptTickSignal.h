#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"

namespace ScriptModuleMinecraft {

class ScriptTickSignal {
public:
    // ScriptTickSignal inner types declare
    // clang-format off
    struct PendingSubscribe;
    struct PendingUnsubscribe;
    struct Slot;
    // clang-format on

    // ScriptTickSignal inner types define
    struct PendingSubscribe {
    public:
        // prevent constructor by default
        PendingSubscribe& operator=(PendingSubscribe const&);
        PendingSubscribe(PendingSubscribe const&);
        PendingSubscribe();

    public:
        // NOLINTBEGIN
        // symbol: ??1PendingSubscribe@ScriptTickSignal@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~PendingSubscribe();

        // NOLINTEND
    };

    struct PendingUnsubscribe {
    public:
        // prevent constructor by default
        PendingUnsubscribe& operator=(PendingUnsubscribe const&);
        PendingUnsubscribe(PendingUnsubscribe const&);
        PendingUnsubscribe();
    };

    struct Slot {
    public:
        // prevent constructor by default
        Slot& operator=(Slot const&);
        Slot(Slot const&);
        Slot();

    public:
        // NOLINTBEGIN
        // symbol: ??1Slot@ScriptTickSignal@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~Slot();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptTickSignal& operator=(ScriptTickSignal const&);
    ScriptTickSignal(ScriptTickSignal const&);
    ScriptTickSignal();

public:
    // NOLINTBEGIN
    // symbol:
    // ?scheduleInterval@ScriptTickSignal@ScriptModuleMinecraft@@QEAAI$$QEAV?$Closure@$$A6AXXZ$$V@Scripting@@II@Z
    MCAPI uint scheduleInterval(class Scripting::Closure<void()>&&, uint interval, uint currentTick);

    // symbol: ?scheduleTimeout@ScriptTickSignal@ScriptModuleMinecraft@@QEAAI$$QEAV?$Closure@$$A6AXXZ$$V@Scripting@@II@Z
    MCAPI uint scheduleTimeout(class Scripting::Closure<void()>&&, uint delay, uint currentTick);

    // symbol:
    // ?scheduleTimeoutSafe@ScriptTickSignal@ScriptModuleMinecraft@@QEAAI$$QEAV?$Closure@$$A6AXXZ$$V@Scripting@@I@Z
    MCAPI uint scheduleTimeoutSafe(class Scripting::Closure<void()>&&, uint currentTick);

    // symbol: ?unschedule@ScriptTickSignal@ScriptModuleMinecraft@@QEAAXI@Z
    MCAPI void unschedule(uint id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_processActive@ScriptTickSignal@ScriptModuleMinecraft@@AEAA_NAEAV?$vector@USlot@ScriptTickSignal@ScriptModuleMinecraft@@V?$allocator@USlot@ScriptTickSignal@ScriptModuleMinecraft@@@std@@@std@@I@Z
    MCAPI bool
    _processActive(std::vector<struct ScriptModuleMinecraft::ScriptTickSignal::Slot>& slots, uint currentTick);

    // symbol:
    // ?_processPending@ScriptTickSignal@ScriptModuleMinecraft@@AEAAXAEAV?$vector@V?$variant@UPendingSubscribe@ScriptTickSignal@ScriptModuleMinecraft@@UPendingUnsubscribe@23@@std@@V?$allocator@V?$variant@UPendingSubscribe@ScriptTickSignal@ScriptModuleMinecraft@@UPendingUnsubscribe@23@@std@@@2@@std@@AEAV?$vector@USlot@ScriptTickSignal@ScriptModuleMinecraft@@V?$allocator@USlot@ScriptTickSignal@ScriptModuleMinecraft@@@std@@@4@@Z
    MCAPI void
    _processPending(std::vector<std::variant<struct ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe, struct ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>&, std::vector<struct ScriptModuleMinecraft::ScriptTickSignal::Slot>&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
