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

class SliderControl : public ::ScriptModuleMinecraftServerUI::IControl {
public:
    // prevent constructor by default
    SliderControl& operator=(SliderControl const&);
    SliderControl(SliderControl const&);
    SliderControl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SliderControl@ScriptModuleMinecraftServerUI@@UEAA@XZ
    virtual ~SliderControl() = default;

    // vIndex: 1, symbol:
    // ?buildJson@SliderControl@ScriptModuleMinecraftServerUI@@UEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    virtual class Scripting::Result<class Json::Value> buildJson(class Player&, ::CurrentCmdVersion) const;

    // symbol:
    // ??0SliderControl@ScriptModuleMinecraftServerUI@@QEAA@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@MMMV?$optional@H@3@@Z
    MCAPI
    SliderControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, float, float, float, std::optional<int>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
