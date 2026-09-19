#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/editor/script/ScriptTransactionOperationHandlerBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Transactions { struct TransactionOperationEvent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabInstanceTransactionOperationHandler
: public ::Editor::ScriptModule::ScriptTransactionOperationHandlerBase,
  public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabInstanceTransactionOperationHandler> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk6a09fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabInstanceTransactionOperationHandler& operator=(ScriptPrefabInstanceTransactionOperationHandler const&);
    ScriptPrefabInstanceTransactionOperationHandler(ScriptPrefabInstanceTransactionOperationHandler const&);
    ScriptPrefabInstanceTransactionOperationHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onTransactionOperationEvent(
        ::Editor::Transactions::TransactionOperationEvent const& evt,
        ::Scripting::WeakLifetimeScope
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTransactionOperationEvent(
        ::Editor::Transactions::TransactionOperationEvent const& evt,
        ::Scripting::WeakLifetimeScope
    );


    // NOLINTEND
};

} // namespace Editor::ScriptModule
