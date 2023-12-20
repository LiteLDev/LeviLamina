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

class TextInputControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // prevent constructor by default
    TextInputControl& operator=(TextInputControl const&);
    TextInputControl(TextInputControl const&);
    TextInputControl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextInputControl@ScriptModuleMinecraftServerUI@@UEAA@XZ
    virtual ~TextInputControl() = default;

    // vIndex: 1, symbol:
    // ?buildJson@TextInputControl@ScriptModuleMinecraftServerUI@@UEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    virtual class Scripting::Result<class Json::Value> buildJson(class Player&, ::CurrentCmdVersion) const;

    // symbol:
    // ??0TextInputControl@ScriptModuleMinecraftServerUI@@QEAA@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@0V?$optional@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@3@@Z
    MCAPI
    TextInputControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::optional<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
