#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/server/editor/transactions/IPendingOperation.h"

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
    virtual ~BlockChangedPendingOperation() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::Editor::Transactions::IOperation> _commit(::Editor::ServiceProviderCollection& services
    ) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<bool> _discard(::Editor::ServiceProviderCollection&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _processBlockChangeIntent(
        ::BlockSource const&                                              region,
        ::Editor::Transactions::BlockChangeIntentData&                    blockIntentData,
        ::std::vector<::Editor::Transactions::BlockChangedOperationData>& changedBlocks
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::Editor::Transactions::IOperation> $_commit(::Editor::ServiceProviderCollection& services);

    MCAPI ::Scripting::Result_deprecated<bool> $_discard(::Editor::ServiceProviderCollection&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions
