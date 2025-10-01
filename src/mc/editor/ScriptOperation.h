#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/IOperation.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Transactions {

class ScriptOperation : public ::Editor::Transactions::IOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnkc09724;
    ::ll::UntypedStorage<8, 32>  mUnk66aae8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptOperation& operator=(ScriptOperation const&);
    ScriptOperation(ScriptOperation const&);
    ScriptOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string_view getName() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> _undo(::Editor::ServiceProviderCollection& services) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> _redo(::Editor::ServiceProviderCollection& services) /*override*/;

    // vIndex: 0
    virtual ~ScriptOperation() /*override*/ = default;
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
