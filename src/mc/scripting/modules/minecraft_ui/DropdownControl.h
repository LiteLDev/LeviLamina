#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft_ui/IControl.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class IControl; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class DropdownControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // prevent constructor by default
    DropdownControl& operator=(DropdownControl const&);
    DropdownControl(DropdownControl const&);
    DropdownControl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropdownControl() = default;

    // vIndex: 1
    virtual class Scripting::Result<class Json::Value>
    buildJson(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCAPI
    DropdownControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>, std::optional<uint>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void*
        ctor$(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>, std::optional<uint>);

    MCAPI class Scripting::Result<class Json::Value>
    buildJson$(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
