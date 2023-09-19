#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolumeItem {
public:
    // prevent constructor by default
    ScriptCompoundBlockVolumeItem& operator=(ScriptCompoundBlockVolumeItem const&);
    ScriptCompoundBlockVolumeItem(ScriptCompoundBlockVolumeItem const&);
    ScriptCompoundBlockVolumeItem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bindInterface@ScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VCompoundBlockVolumeItem@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class CompoundBlockVolumeItem> bindInterface();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
