#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EntityOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/serviceproviders/TransactionManagerServiceProvider.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockVolumeBase;
struct PlayerDimensionChangeBeforeEvent;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class TransactionContext; }
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
    ::ll::UntypedStorage<8, 24> mUnk436aea;
    ::ll::UntypedStorage<8, 24> mUnkf990cc;
    ::ll::UntypedStorage<8, 8>  mUnkb7c54c;
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
    virtual ~TransactionManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void
    addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext) /*override*/;

    virtual void clearTransactions() /*override*/;

    virtual ::Scripting::Result_deprecated<void> undo() /*override*/;

    virtual ::Scripting::Result_deprecated<void> redo() /*override*/;

    virtual uint64 undoSize() const /*override*/;

    virtual uint64 redoSize() const /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    trackBlockChangeList(::std::vector<::BlockPos> const& locations) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    trackBlockChangeArea(::BlockPos const& from, ::BlockPos const& to) /*override*/;

    virtual ::Scripting::Result_deprecated<bool> trackBlockChangeVolume(::BlockVolumeBase const& volume) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    addEntityOperation(::Actor* entity, ::Editor::Transactions::EntityOperation::OperationType type) /*override*/;

    virtual ::Scripting::Result_deprecated<int> commitTrackedChanges() /*override*/;

    virtual ::Scripting::Result_deprecated<int> discardTrackedChanges() /*override*/;

    virtual ::Scripting::Result_deprecated<bool> openTransaction(::std::string const& name) /*override*/;

    virtual ::Scripting::Result_deprecated<bool> commitOpenTransaction() /*override*/;

    virtual ::Scripting::Result_deprecated<bool> discardOpenTransaction() /*override*/;

    virtual ::Scripting::Result_deprecated<bool> addUserDefinedOperation(
        ::std::string const&                                                        payload,
        ::std::string const&                                                        operationName,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnRedo
    ) /*override*/;

    virtual uint64 pendingOperationsSize() const /*override*/;

    virtual bool hasOpenTransaction() const /*override*/;

    virtual void clearAllTransactionData() /*override*/;

    virtual bool isBusy() const /*override*/;

    virtual ::EventResult onEvent(::PlayerDimensionChangeBeforeEvent const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TransactionManagerService(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI void $addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext> transactionContext);

    MCNAPI void $clearTransactions();

    MCNAPI ::Scripting::Result_deprecated<void> $undo();

    MCNAPI ::Scripting::Result_deprecated<void> $redo();

    MCNAPI uint64 $undoSize() const;

    MCNAPI uint64 $redoSize() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $trackBlockChangeList(::std::vector<::BlockPos> const& locations);

    MCNAPI ::Scripting::Result_deprecated<bool> $trackBlockChangeArea(::BlockPos const& from, ::BlockPos const& to);

    MCNAPI ::Scripting::Result_deprecated<bool> $trackBlockChangeVolume(::BlockVolumeBase const& volume);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $addEntityOperation(::Actor* entity, ::Editor::Transactions::EntityOperation::OperationType type);

    MCNAPI ::Scripting::Result_deprecated<int> $commitTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<int> $discardTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<bool> $openTransaction(::std::string const& name);

    MCNAPI ::Scripting::Result_deprecated<bool> $commitOpenTransaction();

    MCNAPI ::Scripting::Result_deprecated<bool> $discardOpenTransaction();

    MCNAPI ::Scripting::Result_deprecated<bool> $addUserDefinedOperation(
        ::std::string const&                                                        payload,
        ::std::string const&                                                        operationName,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnRedo
    );

    MCNAPI uint64 $pendingOperationsSize() const;

    MCNAPI bool $hasOpenTransaction() const;

    MCNAPI void $clearAllTransactionData();

    MCNAPI bool $isBusy() const;

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
