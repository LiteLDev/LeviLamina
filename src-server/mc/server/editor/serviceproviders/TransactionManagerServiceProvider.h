#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EntityOperation.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockVolumeBase;
namespace Editor::Transactions { class TransactionContext; }
// clang-format on

namespace Editor::Services {

class TransactionManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransactionManagerServiceProvider() = default;

    // vIndex: 1
    virtual void addTransaction(::std::unique_ptr<::Editor::Transactions::TransactionContext>) = 0;

    // vIndex: 2
    virtual void clearTransactions() = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> undo() = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<void> redo() = 0;

    // vIndex: 5
    virtual uint64 undoSize() const = 0;

    // vIndex: 6
    virtual uint64 redoSize() const = 0;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<bool> trackBlockChangeList(::std::vector<::BlockPos> const&) = 0;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<bool> trackBlockChangeArea(::BlockPos const&, ::BlockPos const&) = 0;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<bool> trackBlockChangeVolume(::BlockVolumeBase const&) = 0;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<bool>
    addEntityOperation(::Actor*, ::Editor::Transactions::EntityOperation::OperationType const) = 0;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<int> commitTrackedChanges() = 0;

    // vIndex: 12
    virtual ::Scripting::Result_deprecated<int> discardTrackedChanges() = 0;

    // vIndex: 13
    virtual ::Scripting::Result_deprecated<bool> openTransaction(::std::string const& name) = 0;

    // vIndex: 14
    virtual ::Scripting::Result_deprecated<bool> commitOpenTransaction() = 0;

    // vIndex: 15
    virtual ::Scripting::Result_deprecated<bool> discardOpenTransaction() = 0;

    // vIndex: 16
    virtual ::Scripting::Result_deprecated<bool> addUserDefinedOperation(
        ::std::string const&,
        ::std::string const&,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)>,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)>
    ) = 0;

    // vIndex: 17
    virtual uint64 pendingOperationsSize() const = 0;

    // vIndex: 18
    virtual bool hasOpenTransaction() const = 0;

    // vIndex: 19
    virtual void clearAllTransactionData() = 0;

    // vIndex: 20
    virtual bool isBusy() const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ERROR_BUSY_SERVICE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ERROR_NO_OPEN_TRANSACTION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
