#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IOperation.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

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
    ::ll::UntypedStorage<8, 32>  mUnkf21d22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptOperation& operator=(ScriptOperation const&);
    ScriptOperation(ScriptOperation const&);
    ScriptOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getName() /*override*/;

    virtual ::Scripting::Result_deprecated<void> _undo(::Editor::ServiceProviderCollection&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _redo(::Editor::ServiceProviderCollection&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Transactions
