#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class IOperation; }
// clang-format on

namespace Editor::Transactions {

class TransactionContext {
public:
    // TransactionContext inner types define
    enum class OperationErrorHandling : int {
        ContinueOnError = 0,
        StopOnError = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk94a2cb;
    ::ll::UntypedStorage<8, 16> mUnk95977f;
    ::ll::UntypedStorage<8, 24> mUnkcc2a0c;
    ::ll::UntypedStorage<8, 24> mUnk4549ce;
    ::ll::UntypedStorage<4, 4> mUnk1afd03;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionContext& operator=(TransactionContext const&);
    TransactionContext(TransactionContext const&);
    TransactionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransactionContext(::std::string name, ::Editor::Transactions::TransactionContext::OperationErrorHandling errorHandling);

    MCNAPI ::Scripting::Result_deprecated<void> _redo(::Editor::ServiceProviderCollection& serviceProviders) const;

    MCNAPI ::Scripting::Result_deprecated<void> _undo(::Editor::ServiceProviderCollection& serviceProviders) const;

    MCNAPI void addOperation(::std::unique_ptr<::Editor::Transactions::IOperation> operation);

    MCNAPI ~TransactionContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name, ::Editor::Transactions::TransactionContext::OperationErrorHandling errorHandling);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
