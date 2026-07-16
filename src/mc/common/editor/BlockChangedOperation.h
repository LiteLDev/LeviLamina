#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { struct BlockChangeIntentData; }
// clang-format on

namespace Editor::Transactions {

class BlockChangedOperation : public ::Editor::Transactions::IOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4da484;
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::Editor::Transactions::BlockChangeIntentData>
    createBlockChangeIntentFromLocation(::BlockSource const& region, ::BlockPos const& pos, bool includeAll);
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
