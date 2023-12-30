#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/Result.h"

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
    // vIndex: 0, symbol: ??1IControl@ScriptModuleMinecraftServerUI@@UEAA@XZ
    virtual ~IControl();

    // vIndex: 1, symbol:
    // ?buildJson@DropdownControl@ScriptModuleMinecraftServerUI@@UEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    virtual class Scripting::Result<class Json::Value> buildJson(class Player&, ::CurrentCmdVersion) const = 0;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
