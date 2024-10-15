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
    virtual class Scripting::Result<class Json::Value>
    buildJson(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCAPI
    SliderControl(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, float, float, float, std::optional<int>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, float, float, float, std::optional<int>);

    MCAPI class Scripting::Result<class Json::Value>
    buildJson$(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
