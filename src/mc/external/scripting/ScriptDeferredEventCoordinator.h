#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

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

    // symbol:
    // ?generateOrderDocumentationForVersion@ScriptDeferredEventCoordinator@@SAXAEBUModuleDescriptor@Scripting@@AEAVValue@Json@@@Z
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_sendFlushBlockCustomComponentAfterEvents@ScriptDeferredEventCoordinator@@AEAA_NXZ
    MCAPI bool _sendFlushBlockCustomComponentAfterEvents();

    // symbol: ?_sendFlushItemCustomComponentAfterEvents@ScriptDeferredEventCoordinator@@AEAA_NXZ
    MCAPI bool _sendFlushItemCustomComponentAfterEvents();

    // symbol: ?_sendFlushSystemAfterEvents@ScriptDeferredEventCoordinator@@AEAA_NXZ
    MCAPI bool _sendFlushSystemAfterEvents();

    // symbol: ?_sendFlushWorldAfterEvents@ScriptDeferredEventCoordinator@@AEAA_NXZ
    MCAPI bool _sendFlushWorldAfterEvents();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?sEventExecutionOrder@ScriptDeferredEventCoordinator@@0V?$vector@UDocumentableEventExecution@ScriptDeferredEventCoordinator@@V?$allocator@UDocumentableEventExecution@ScriptDeferredEventCoordinator@@@std@@@std@@B
    MCAPI static std::vector<struct ScriptDeferredEventCoordinator::DocumentableEventExecution> const
        sEventExecutionOrder;

    // NOLINTEND
};
