#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/server/editor/serviceproviders/TransactionManagerServiceProvider.h"
#include "mc/server/editor/transactions/EntityOperation.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundBlockVolume;
class PlayerEventListener;
struct PlayerDimensionChangeBeforeEvent;
namespace Editor::Network { class RedoOperationPayload; }
namespace Editor::Network { class UndoOperationPayload; }
namespace Editor::Selection { class SelectionContainer; }
namespace Editor::Transactions { class TransactionContext; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::Services {

class TransactionManagerService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::TransactionManagerServiceProvider,
                                  public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk805093;
    ::ll::UntypedStorage<8, 16> mUnk5f5816;
    ::ll::UntypedStorage<8, 24> mUnk74d856;
    ::ll::UntypedStorage<8, 24> mUnkc7ac9e;
    ::ll::UntypedStorage<8, 8>  mUnk69f6c8;
    ::ll::UntypedStorage<1, 1>  mUnkaf2e0d;
    ::ll::UntypedStorage<1, 1>  mUnk3ff6c6;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionManagerService& operator=(TransactionManagerService const&);
    TransactionManagerService(TransactionManagerService const&);
    TransactionManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 51
    virtual ::EventResult onEvent(::PlayerDimensionChangeBeforeEvent const&) /*override*/;

    // vIndex: 0
    virtual ~TransactionManagerService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext
    ) /*override*/;

    // vIndex: 2
    virtual void clearTransactions() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> undo() /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<void> redo() /*override*/;

    // vIndex: 5
    virtual uint64 undoSize() const /*override*/;

    // vIndex: 6
    virtual uint64 redoSize() const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<bool> trackBlockChangeList(::std::vector<::BlockPos> const& locations
    ) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<bool>
    trackBlockChangeArea(::BlockPos const& from, ::BlockPos const& to) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<bool>
    trackBlockChangeSelection(::Editor::Selection::SelectionContainer const& selection) /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<bool>
    trackBlockChangeCompoundBlockVolume(::CompoundBlockVolume const& compoundVolume) /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result<bool, ::Scripting::Error>
    addEntityOperation(::Actor* entity, ::Editor::Transactions::EntityOperation::OperationType type) /*override*/;

    // vIndex: 12
    virtual ::Scripting::Result_deprecated<int> commitTrackedChanges() /*override*/;

    // vIndex: 13
    virtual ::Scripting::Result_deprecated<int> discardTrackedChanges() /*override*/;

    // vIndex: 14
    virtual ::Scripting::Result_deprecated<bool> openTransaction(::std::string const& name) /*override*/;

    // vIndex: 15
    virtual ::Scripting::Result_deprecated<bool> commitOpenTransaction() /*override*/;

    // vIndex: 16
    virtual ::Scripting::Result_deprecated<bool> discardOpenTransaction() /*override*/;

    // vIndex: 17
    virtual ::Scripting::Result_deprecated<bool> addUserDefinedOperation(
        ::std::string const&                                             payload,
        ::std::string const&                                             operationName,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnRedo
    ) /*override*/;

    // vIndex: 18
    virtual uint64 pendingOperationsSize() const /*override*/;

    // vIndex: 19
    virtual bool hasOpenTransaction() const /*override*/;

    // vIndex: 20
    virtual void clearAllTransactionData() /*override*/;

    // vIndex: 21
    virtual bool isBusy() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleRedoMessage(::Editor::Network::RedoOperationPayload const&);

    MCAPI void _handleUndoMessage(::Editor::Network::UndoOperationPayload const&);

    MCAPI ::Scripting::Result<void> _redo();

    MCAPI ::Scripting::Result_deprecated<bool>
    _trackBlockChanges(::BlockSource const& region, ::std::vector<::BlockPos> const& locations);

    MCAPI ::Scripting::Result<void> _undo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PlayerDimensionChangeBeforeEvent const&);

    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI void $addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext);

    MCAPI void $clearTransactions();

    MCAPI ::Scripting::Result<void> $undo();

    MCAPI ::Scripting::Result<void> $redo();

    MCAPI uint64 $undoSize() const;

    MCAPI uint64 $redoSize() const;

    MCAPI ::Scripting::Result_deprecated<bool> $trackBlockChangeList(::std::vector<::BlockPos> const& locations);

    MCAPI ::Scripting::Result_deprecated<bool> $trackBlockChangeArea(::BlockPos const& from, ::BlockPos const& to);

    MCAPI ::Scripting::Result_deprecated<bool>
    $trackBlockChangeSelection(::Editor::Selection::SelectionContainer const& selection);

    MCAPI ::Scripting::Result_deprecated<bool>
    $trackBlockChangeCompoundBlockVolume(::CompoundBlockVolume const& compoundVolume);

    MCAPI ::Scripting::Result<bool, ::Scripting::Error>
    $addEntityOperation(::Actor* entity, ::Editor::Transactions::EntityOperation::OperationType type);

    MCAPI ::Scripting::Result_deprecated<int> $commitTrackedChanges();

    MCAPI ::Scripting::Result_deprecated<int> $discardTrackedChanges();

    MCAPI ::Scripting::Result_deprecated<bool> $openTransaction(::std::string const& name);

    MCAPI ::Scripting::Result_deprecated<bool> $commitOpenTransaction();

    MCAPI ::Scripting::Result_deprecated<bool> $discardOpenTransaction();

    MCAPI ::Scripting::Result_deprecated<bool> $addUserDefinedOperation(
        ::std::string const&                                             payload,
        ::std::string const&                                             operationName,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnRedo
    );

    MCAPI uint64 $pendingOperationsSize() const;

    MCAPI bool $hasOpenTransaction() const;

    MCAPI void $clearAllTransactionData();

    MCAPI bool $isBusy() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEventListenerDispatcher();

    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForTransactionManagerServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
