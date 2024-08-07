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
    ScriptCompoundBlockVolumeItem();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptCompoundBlockVolumeItem(class CompoundBlockVolumeItem const&);

    MCAPI ScriptCompoundBlockVolumeItem(class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const&);

    MCAPI class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem&
    operator=(class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const&);

    MCAPI class CompoundBlockVolumeItem toCompoundBlockVolumeItem() const;

    MCAPI ~ScriptCompoundBlockVolumeItem();

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem>
    bindInterface();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
