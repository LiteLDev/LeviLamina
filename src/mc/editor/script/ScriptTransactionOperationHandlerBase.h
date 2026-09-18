#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Transactions { struct TransactionOperationEvent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransactionOperationHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke4dbd4;
    ::ll::UntypedStorage<8, 32> mUnk3a4e00;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransactionOperationHandlerBase& operator=(ScriptTransactionOperationHandlerBase const&);
    ScriptTransactionOperationHandlerBase(ScriptTransactionOperationHandlerBase const&);
    ScriptTransactionOperationHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTransactionOperationHandlerBase() = default;

    virtual void onTransactionOperationEvent(
        ::Editor::Transactions::TransactionOperationEvent const& evt,
        ::Scripting::WeakLifetimeScope                           scope
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;
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
        ::Scripting::WeakLifetimeScope                           scope
    );


    // NOLINTEND
};

} // namespace Editor::ScriptModule
