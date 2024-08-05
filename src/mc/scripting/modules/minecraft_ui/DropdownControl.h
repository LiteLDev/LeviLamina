#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft_ui/IControl.h"

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
    virtual class Scripting::Result<class Json::Value> buildJson(class Player&, ::CurrentCmdVersion) const;

    MCAPI
    DropdownControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>, std::optional<uint>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
