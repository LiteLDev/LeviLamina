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
    // vIndex: 0
    virtual ~SliderControl() = default;

    // vIndex: 1
    virtual class Scripting::Result<class Json::Value> buildJson(class Player&, ::CurrentCmdVersion) const;

    MCAPI
    SliderControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, float, float, float, std::optional<int>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
