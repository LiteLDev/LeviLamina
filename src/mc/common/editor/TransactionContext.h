#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 32> mUnkeaa45c;
    ::ll::UntypedStorage<8, 16> mUnk95977f;
    ::ll::UntypedStorage<8, 24> mUnkc3c05a;
    ::ll::UntypedStorage<8, 24> mUnk14143f;
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
    MCNAPI TransactionContext(
        ::std::string                                                      name,
        ::Editor::Transactions::TransactionContext::OperationErrorHandling errorHandling
    );

    MCNAPI ~TransactionContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string name, ::Editor::Transactions::TransactionContext::OperationErrorHandling errorHandling);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Transactions
