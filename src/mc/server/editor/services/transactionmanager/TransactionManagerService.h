#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/serviceproviders/TransactionManagerServiceProvider.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
struct PlayerDimensionChangeBeforeEvent;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class RedoOperationPayload; }
namespace Editor::Network { class UndoOperationPayload; }
namespace Editor::Transactions { class PendingTransaction; }
namespace Editor::Transactions { class TransactionContext; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class TransactionManagerService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::TransactionManagerServiceProvider,
                                  public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // TransactionManagerService inner types declare
    // clang-format off
    struct Request;
    struct TransactionCount;
    // clang-format on

    // TransactionManagerService inner types define
    struct Request {
    public:
        // Request inner types define
        enum class State : int {
            Waiting    = 0,
            Processing = 1,
            Completed  = 2,
        };

        enum class Type : int {
            Undo = 0,
            Redo = 1,
            Add  = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk5abdf3;
        ::ll::UntypedStorage<4, 4>  mUnkdb1165;
        ::ll::UntypedStorage<8, 8>  mUnk786087;
        ::ll::UntypedStorage<8, 72> mUnkcdb86a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Request& operator=(Request const&);
        Request(Request const&);
        Request();
    };

    struct TransactionCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk641be8;
        ::ll::UntypedStorage<8, 8> mUnkb087f5;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransactionCount& operator=(TransactionCount const&);
        TransactionCount(TransactionCount const&);
        TransactionCount();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk805093;
    ::ll::UntypedStorage<8, 16> mUnk5f5816;
    ::ll::UntypedStorage<8, 24> mUnk436aea;
    ::ll::UntypedStorage<8, 24> mUnkf990cc;
    ::ll::UntypedStorage<8, 40> mUnk7c3256;
    ::ll::UntypedStorage<8, 24> mUnka9cde2;
    ::ll::UntypedStorage<8, 16> mUnkfe14d9;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionManagerService& operator=(TransactionManagerService const&);
    TransactionManagerService(TransactionManagerService const&);
    TransactionManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransactionManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::WeakRef<::Editor::Transactions::PendingTransaction>
    createPendingTransaction(::std::string const& name) /*override*/;

    virtual ::WeakRef<::Editor::Transactions::PendingTransaction>
    getPendingTransaction(::mce::UUID const& id) /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::Transactions::PendingTransaction>>
    getPendingTransactionsByName(::std::string const& name) /*override*/;

    virtual ::Scripting::Result_deprecated<void> discardPendingTransaction(::mce::UUID const& id) /*override*/;

    virtual ::Scripting::Result_deprecated<void> finalizePendingTransaction(::mce::UUID const& id) /*override*/;

    virtual uint64 pendingTransactionCount() const /*override*/;

    virtual void
    addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext) /*override*/;

    virtual void clearTransactions() /*override*/;

    virtual ::Scripting::Result_deprecated<void> undo() /*override*/;

    virtual ::Scripting::Result_deprecated<void> redo() /*override*/;

    virtual uint64 undoSize() const /*override*/;

    virtual uint64 redoSize() const /*override*/;

    virtual void clearAllTransactionData() /*override*/;

    virtual ::EventResult onEvent(::PlayerDimensionChangeBeforeEvent const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TransactionManagerService(::Editor::ServiceProviderCollection& providers);

    MCNAPI ::Scripting::Result_deprecated<void>
    _addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext);

    MCNAPI void _handleRedoMessage(::Editor::Network::RedoOperationPayload const&);

    MCNAPI void _handleUndoMessage(::Editor::Network::UndoOperationPayload const&);

    MCNAPI void tick(::Editor::ServiceProviderCollection&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::WeakRef<::Editor::Transactions::PendingTransaction> $createPendingTransaction(::std::string const& name);

    MCNAPI ::WeakRef<::Editor::Transactions::PendingTransaction> $getPendingTransaction(::mce::UUID const& id);

    MCNAPI ::std::vector<::WeakRef<::Editor::Transactions::PendingTransaction>>
    $getPendingTransactionsByName(::std::string const& name);

    MCNAPI ::Scripting::Result_deprecated<void> $discardPendingTransaction(::mce::UUID const& id);

    MCNAPI ::Scripting::Result_deprecated<void> $finalizePendingTransaction(::mce::UUID const& id);

    MCNAPI uint64 $pendingTransactionCount() const;

    MCNAPI void $addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext);

    MCNAPI void $clearTransactions();

    MCNAPI ::Scripting::Result_deprecated<void> $undo();

    MCNAPI ::Scripting::Result_deprecated<void> $redo();

    MCNAPI uint64 $undoSize() const;

    MCNAPI uint64 $redoSize() const;

    MCNAPI void $clearAllTransactionData();

    MCNAPI ::EventResult $onEvent(::PlayerDimensionChangeBeforeEvent const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventListenerDispatcher();

    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForTransactionManagerServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
