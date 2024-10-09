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

class TextInputControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // prevent constructor by default
    TextInputControl& operator=(TextInputControl const&);
    TextInputControl(TextInputControl const&);
    TextInputControl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextInputControl() = default;

    // vIndex: 1
    virtual class Scripting::Result<class Json::Value>
    buildJson(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCAPI TextInputControl(
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> placeholderText,
        std::optional<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
