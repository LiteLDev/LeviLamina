#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/server/editor/transactions/IOperation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class Level;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { struct BlockChangeIntentData; }
// clang-format on

namespace Editor::Transactions {

class BlockChangedOperation : public ::Editor::Transactions::IOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk249dee;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangedOperation& operator=(BlockChangedOperation const&);
    BlockChangedOperation(BlockChangedOperation const&);
    BlockChangedOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockChangedOperation() /*override*/;

    // vIndex: 1
    virtual ::std::string_view getName() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> _undo(::Editor::ServiceProviderCollection& services) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> _redo(::Editor::ServiceProviderCollection& services) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> _performOperation(::Editor::ServiceProviderCollection& services, bool isUndo) const;

    MCAPI ::Scripting::Result<void> _setBlock(
        ::Level&          level,
        ::BlockSource&    region,
        uint const&       blockToPlace,
        uint const&       extraBlockToPlace,
        ::CompoundTag*    blockData,
        ::BlockPos const& pos
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Editor::Transactions::BlockChangeIntentData>
    createBlockChangeIntentFromLocation(::BlockSource const& region, ::BlockPos const& pos, bool includeAll);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_OPERATION_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getName();

    MCAPI ::Scripting::Result<void> $_undo(::Editor::ServiceProviderCollection& services);

    MCAPI ::Scripting::Result<void> $_redo(::Editor::ServiceProviderCollection& services);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions
