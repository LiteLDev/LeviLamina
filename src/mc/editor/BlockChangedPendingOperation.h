#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/IPendingOperation.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class IOperation; }
namespace Editor::Transactions { struct BlockChangeIntentData; }
namespace Editor::Transactions { struct BlockChangedOperationData; }
// clang-format on

namespace Editor::Transactions {

class BlockChangedPendingOperation : public ::Editor::Transactions::IPendingOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1bcc39;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangedPendingOperation& operator=(BlockChangedPendingOperation const&);
    BlockChangedPendingOperation(BlockChangedPendingOperation const&);
    BlockChangedPendingOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockChangedPendingOperation() /*override*/ = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::Editor::Transactions::IOperation>
    _commit(::Editor::ServiceProviderCollection& services) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<bool> _discard(::Editor::ServiceProviderCollection&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _processBlockChangeIntent(
        ::BlockSource const&                                              region,
        ::Editor::Transactions::BlockChangeIntentData&                    blockIntentData,
        ::std::vector<::Editor::Transactions::BlockChangedOperationData>& changedBlocks
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Editor::Transactions::IOperation>
    $_commit(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Scripting::Result_deprecated<bool> $_discard(::Editor::ServiceProviderCollection&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions
