#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptFormRejectError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6a5531;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormRejectError& operator=(ScriptFormRejectError const&);
    ScriptFormRejectError(ScriptFormRejectError const&);
    ScriptFormRejectError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptFormRejectError(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);

    MCNAPI ~ScriptFormRejectError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
