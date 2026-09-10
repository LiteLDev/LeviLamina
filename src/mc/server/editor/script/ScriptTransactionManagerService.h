#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptUserDefinedTransactionHandlerId; }
namespace Editor::Services { class TransactionManagerServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransactionManagerService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptTransactionManagerService> {
public:
    // ScriptTransactionManagerService inner types declare
    // clang-format off
    struct UserDefinedOperationHandler;
    // clang-format on

    // ScriptTransactionManagerService inner types define
    struct UserDefinedOperationHandler {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mUnk11bc13;
        ::ll::UntypedStorage<8, 112> mUnkee9e54;
        // NOLINTEND

    public:
        // prevent constructor by default
        UserDefinedOperationHandler& operator=(UserDefinedOperationHandler const&);
        UserDefinedOperationHandler(UserDefinedOperationHandler const&);
        UserDefinedOperationHandler();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5f49c3;
    ::ll::UntypedStorage<8, 16> mUnkd366ce;
    ::ll::UntypedStorage<8, 64> mUnk21ded5;
    ::ll::UntypedStorage<8, 64> mUnk25294e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransactionManagerService& operator=(ScriptTransactionManagerService const&);
    ScriptTransactionManagerService(ScriptTransactionManagerService const&);
    ScriptTransactionManagerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTransactionManagerService(::Editor::ScriptModule::ScriptTransactionManagerService&& other);

    MCNAPI ScriptTransactionManagerService(
        ::std::weak_ptr<::Editor::Services::TransactionManagerServiceProvider> transactionManager,
        ::Scripting::WeakLifetimeScope const&                                  scope
    );

    MCNAPI ::Scripting::Error _getInvalidTransactionServiceError() const;

    MCNAPI ::Scripting::Result_deprecated<void> discardPendingTransaction(::mce::UUID const& uuid);

    MCNAPI ::Scripting::Result_deprecated<void> finalizePendingTransaction(::mce::UUID const& uuid);

    MCNAPI ::Scripting::Result_deprecated<
        ::Editor::ScriptModule::ScriptTransactionManagerService::UserDefinedOperationHandler>
    getUserDefinedOperationHandler(
        ::Editor::ScriptModule::ScriptUserDefinedTransactionHandlerId const& transactionHandler
    );

    MCNAPI ::Editor::ScriptModule::ScriptTransactionManagerService&
    operator=(::Editor::ScriptModule::ScriptTransactionManagerService&& other);

    MCNAPI ::Scripting::Result_deprecated<void> redo();

    MCNAPI ::Scripting::Result_deprecated<int> redoSize() const;

    MCNAPI ::Scripting::Result_deprecated<void> undo();

    MCNAPI ::Scripting::Result_deprecated<int> undoSize() const;

    MCNAPI ~ScriptTransactionManagerService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptTransactionManagerService&& other);

    MCNAPI void* $ctor(
        ::std::weak_ptr<::Editor::Services::TransactionManagerServiceProvider> transactionManager,
        ::Scripting::WeakLifetimeScope const&                                  scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
