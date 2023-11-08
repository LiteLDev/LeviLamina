#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0, symbol: __gen_??1IControl@ScriptModuleMinecraftServerUI@@UEAA@XZ
    virtual ~IControl() = default;

    // vIndex: 1, symbol: ?getJson@TextInputControl@ScriptModuleMinecraftServerUI@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value getJson() const = 0;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
