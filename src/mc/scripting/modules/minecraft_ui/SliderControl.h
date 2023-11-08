#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/IControl.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
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

    // vIndex: 1, symbol: ?getJson@SliderControl@ScriptModuleMinecraftServerUI@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value getJson() const;

    // symbol: ??0SliderControl@ScriptModuleMinecraftServerUI@@QEAA@VValue@Json@@MMMV?$optional@H@std@@@Z
    MCAPI SliderControl(class Json::Value, float, float, float, std::optional<int>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
