#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Transactions { class PendingTransaction; }
namespace Editor::Transactions { class TransactionContext; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class TransactionManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransactionManagerServiceProvider() = default;

    virtual void addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext) = 0;

    virtual void clearTransactions() = 0;

    virtual ::WeakRef<::Editor::Transactions::PendingTransaction>
    createPendingTransaction(::std::string const& name) = 0;

    virtual ::WeakRef<::Editor::Transactions::PendingTransaction> getPendingTransaction(::mce::UUID const& id) = 0;

    virtual ::std::vector<::WeakRef<::Editor::Transactions::PendingTransaction>>
    getPendingTransactionsByName(::std::string const& name) = 0;

    virtual ::Scripting::Result_deprecated<void> discardPendingTransaction(::mce::UUID const& id) = 0;

    virtual ::Scripting::Result_deprecated<void> finalizePendingTransaction(::mce::UUID const& id) = 0;

    virtual uint64 pendingTransactionCount() const = 0;

    virtual ::Scripting::Result_deprecated<void> undo() = 0;

    virtual ::Scripting::Result_deprecated<void> redo() = 0;

    virtual uint64 undoSize() const = 0;

    virtual uint64 redoSize() const = 0;

    virtual void clearAllTransactionData() = 0;
    // NOLINTEND
};

} // namespace Editor::Services
