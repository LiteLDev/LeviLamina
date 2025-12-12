#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
    virtual ~BlockChangedOperation() /*override*/ = default;

    virtual ::std::string_view getName() /*override*/;

    virtual ::Scripting::Result_deprecated<void> _undo(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _redo(::Editor::ServiceProviderCollection& services) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    _performOperation(::Editor::ServiceProviderCollection& services, bool isUndo) const;

    MCNAPI ::Scripting::Result_deprecated<void> _setBlock(
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
    MCNAPI static ::std::vector<::Editor::Transactions::BlockChangeIntentData>
    createBlockChangeIntentFromLocation(::BlockSource const& region, ::BlockPos const& pos, bool includeAll);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& DEFAULT_OPERATION_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getName();

    MCNAPI ::Scripting::Result_deprecated<void> $_undo(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Scripting::Result_deprecated<void> $_redo(::Editor::ServiceProviderCollection& services);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions
