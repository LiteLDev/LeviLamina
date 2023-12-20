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
    // vIndex: 0, symbol: __gen_??1DropdownControl@ScriptModuleMinecraftServerUI@@UEAA@XZ
    virtual ~DropdownControl() = default;

    // vIndex: 1, symbol:
    // ?buildJson@DropdownControl@ScriptModuleMinecraftServerUI@@UEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    virtual class Scripting::Result<class Json::Value> buildJson(class Player&, ::CurrentCmdVersion) const;

    // symbol:
    // ??0DropdownControl@ScriptModuleMinecraftServerUI@@QEAA@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@3@V?$optional@I@3@@Z
    MCAPI
    DropdownControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>, std::optional<uint>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
