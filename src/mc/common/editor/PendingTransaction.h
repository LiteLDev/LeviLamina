#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EntityOperation.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockVolumeBase;
namespace mce { class UUID; }
// clang-format on

namespace Editor::Transactions {

class PendingTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk75213a;
    ::ll::UntypedStorage<8, 8> mUnk792894;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingTransaction& operator=(PendingTransaction const&);
    PendingTransaction(PendingTransaction const&);
    PendingTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool>
    addEntityOperation(::Actor* entity, ::Editor::Transactions::EntityOperation::OperationType type);

    MCNAPI ::Scripting::Result_deprecated<bool> addUserDefinedOperation(
        ::std::string const&                                                        payload,
        ::std::string const&                                                        operationName,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnRedo
    );

    MCNAPI ::Scripting::Result_deprecated<int> commitTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<int> discardTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeArea(::BlockPos const& from, ::BlockPos const& to);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeList(::std::vector<::BlockPos> const& locations);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeVolume(::BlockVolumeBase const& volume);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID getId(::WeakRef<::Editor::Transactions::PendingTransaction> weak);

    MCNAPI static bool isValid(::WeakRef<::Editor::Transactions::PendingTransaction> weak);
    // NOLINTEND
};

} // namespace Editor::Transactions
