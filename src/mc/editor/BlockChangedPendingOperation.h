#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/IPendingOperation.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Transactions { class IOperation; }
// clang-format on

namespace Editor::Transactions {

class BlockChangedPendingOperation : public ::Editor::Transactions::IPendingOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk10c9f5;
    ::ll::UntypedStorage<8, 24> mUnk7be951;
    ::ll::UntypedStorage<4, 4>  mUnkcf942c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangedPendingOperation& operator=(BlockChangedPendingOperation const&);
    BlockChangedPendingOperation(BlockChangedPendingOperation const&);
    BlockChangedPendingOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockChangedPendingOperation() /*override*/ = default;

    virtual ::std::unique_ptr<::Editor::Transactions::IOperation>
    _commit(::Editor::ServiceProviderCollection& services) /*override*/;

    virtual ::Scripting::Result_deprecated<bool> _discard(::Editor::ServiceProviderCollection&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Editor::Transactions::IOperation>
    $_commit(::Editor::ServiceProviderCollection& services);

    MCNAPI ::Scripting::Result_deprecated<bool> $_discard(::Editor::ServiceProviderCollection&);


    // NOLINTEND
};

} // namespace Editor::Transactions
