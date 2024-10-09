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
    // vIndex: 0
    virtual ~ScriptDeferredEventCoordinator() = default;

    MCAPI void sendAllDeferredEvents();

    MCAPI static void generateOrderDocumentationForVersion(
        struct Scripting::ModuleDescriptor const& moduleToDocumentFor,
        class Json::Value&                        eventOrderArray
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _sendFlushBlockCustomComponentAfterEvents();

    MCAPI bool _sendFlushItemCustomComponentAfterEvents();

    MCAPI bool _sendFlushSystemAfterEvents();

    MCAPI bool _sendFlushWorldAfterEvents();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<struct ScriptDeferredEventCoordinator::DocumentableEventExecution> const
        sEventExecutionOrder;

    // NOLINTEND
};
