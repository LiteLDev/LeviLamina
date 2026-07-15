#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormData
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkb0e1b1;
    ::ll::UntypedStorage<8, 216> mUnk861562;
    ::ll::UntypedStorage<8, 216> mUnk2fb338;
    ::ll::UntypedStorage<8, 216> mUnk316bac;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageFormData& operator=(ScriptMessageFormData const&);
    ScriptMessageFormData(ScriptMessageFormData const&);
    ScriptMessageFormData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
