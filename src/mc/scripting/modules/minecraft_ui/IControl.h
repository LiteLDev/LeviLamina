#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class IControl {
public:
    // prevent constructor by default
    IControl& operator=(IControl const&);
    IControl(IControl const&);
    IControl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IControl();

    // vIndex: 1
    virtual class Scripting::Result<class Json::Value>
    buildJson(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
