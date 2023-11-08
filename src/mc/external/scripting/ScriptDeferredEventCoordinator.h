#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventCoordinator {
public:
    // ScriptDeferredEventCoordinator inner types declare
    // clang-format off
    struct DocumentableEventExecution;
    // clang-format on

    // ScriptDeferredEventCoordinator inner types define
    struct DocumentableEventExecution {
    public:
        // prevent constructor by default
        DocumentableEventExecution& operator=(DocumentableEventExecution const&);
        DocumentableEventExecution(DocumentableEventExecution const&);
        DocumentableEventExecution();

    public:
        // NOLINTBEGIN
        // symbol: ??1DocumentableEventExecution@ScriptDeferredEventCoordinator@@QEAA@XZ
        MCAPI ~DocumentableEventExecution();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptDeferredEventCoordinator& operator=(ScriptDeferredEventCoordinator const&);
    ScriptDeferredEventCoordinator(ScriptDeferredEventCoordinator const&);
    ScriptDeferredEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptDeferredEventCoordinator@@UEAA@XZ
    virtual ~ScriptDeferredEventCoordinator() = default;

    // symbol: ?sendAllDeferredEvents@ScriptDeferredEventCoordinator@@QEAAXXZ
    MCAPI void sendAllDeferredEvents();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_sendFlushSystemAfterEvents@ScriptDeferredEventCoordinator@@AEAA_NXZ
    MCAPI bool _sendFlushSystemAfterEvents();

    // symbol: ?_sendFlushWorldAfterEvents@ScriptDeferredEventCoordinator@@AEAA_NXZ
    MCAPI bool _sendFlushWorldAfterEvents();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?sEventExecutionOrder@ScriptDeferredEventCoordinator@@0V?$vector@UDocumentableEventExecution@ScriptDeferredEventCoordinator@@V?$allocator@UDocumentableEventExecution@ScriptDeferredEventCoordinator@@@std@@@std@@B
    MCAPI static std::vector<struct ScriptDeferredEventCoordinator::DocumentableEventExecution> const
        sEventExecutionOrder;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sEventExecutionOrder() { return sEventExecutionOrder; }

    // NOLINTEND
};
