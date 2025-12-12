#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class IControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IControl();

    virtual ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError>
    buildJson(::Player&, ::CurrentCmdVersion) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
