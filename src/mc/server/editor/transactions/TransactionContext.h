#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class IOperation; }
namespace Editor::Transactions { class IPendingOperation; }
// clang-format on

namespace Editor::Transactions {

class TransactionContext {
public:
    // TransactionContext inner types define
    enum class OperationErrorHandling : int {
        ContinueOnError = 0,
        StopOnError     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk94a2cb;
    ::ll::UntypedStorage<8, 16> mUnk95977f;
    ::ll::UntypedStorage<8, 24> mUnkcc2a0c;
    ::ll::UntypedStorage<8, 24> mUnk4549ce;
    ::ll::UntypedStorage<4, 4>  mUnk1afd03;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionContext& operator=(TransactionContext const&);
    TransactionContext(TransactionContext const&);
    TransactionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransactionContext(
        ::std::string                                                      name,
        ::Editor::Transactions::TransactionContext::OperationErrorHandling errorHandling
    );

    MCAPI ::Scripting::Result<void> _redo(::Editor::ServiceProviderCollection& serviceProviders) const;

    MCAPI ::Scripting::Result<void> _undo(::Editor::ServiceProviderCollection& serviceProviders) const;

    MCAPI void addOperation(::std::unique_ptr<::Editor::Transactions::IOperation> operation);

    MCAPI void addPendingOperation(::std::unique_ptr<::Editor::Transactions::IPendingOperation> operation);

    MCAPI ::Scripting::Result_deprecated<int>
    commitPendingOperations(::Editor::ServiceProviderCollection& serviceProviders);

    MCAPI ::Scripting::Result_deprecated<int>
    discardPendingOperations(::Editor::ServiceProviderCollection& serviceProviders);

    MCAPI bool empty() const;

    MCAPI ~TransactionContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string name, ::Editor::Transactions::TransactionContext::OperationErrorHandling errorHandling);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Transactions
