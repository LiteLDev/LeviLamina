#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinatorNoTracking.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
namespace Json { class Value; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptDeferredEventCoordinator : public ::EventCoordinatorNoTracking<::ScriptDeferredEventListener> {
public:
    // ScriptDeferredEventCoordinator inner types declare
    // clang-format off
    struct DocumentableEventExecution;
    // clang-format on

    // ScriptDeferredEventCoordinator inner types define
    struct DocumentableEventExecution {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkc51bd3;
        ::ll::UntypedStorage<8, 64> mUnkce87df;
        // NOLINTEND

    public:
        // prevent constructor by default
        DocumentableEventExecution& operator=(DocumentableEventExecution const&);
        DocumentableEventExecution(DocumentableEventExecution const&);
        DocumentableEventExecution();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DocumentableEventExecution();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDeferredEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _sendFlushBlockCustomComponentAfterEvents();

    MCAPI bool _sendFlushEditorDataStoreAfterEvents();

    MCAPI bool _sendFlushEditorExtensionContextAfterEvents();

    MCAPI bool _sendFlushItemCustomComponentAfterEvents();

    MCAPI bool _sendFlushSystemAfterEvents();

    MCAPI bool _sendFlushWorldAfterEvents();

    MCAPI void sendAllDeferredEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ScriptDeferredEventCoordinator::DocumentableEventExecution> const&
    sEventExecutionOrder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
