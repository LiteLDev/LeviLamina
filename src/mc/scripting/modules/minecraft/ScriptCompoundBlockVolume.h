#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume {
public:
    // prevent constructor by default
    ScriptCompoundBlockVolume(ScriptCompoundBlockVolume const&);
    ScriptCompoundBlockVolume();

public:
    // NOLINTBEGIN
    MCAPI class ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptCompoundBlockVolume const&);

    MCAPI ~ScriptCompoundBlockVolume();

    MCAPI static class Scripting::EnumBindingBuilder<::CompoundBlockVolumeAction, ::CompoundBlockVolumeAction>
    bindActionEnums();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptCompoundBlockVolume>
    bindClass();

    MCAPI static class Scripting::
        EnumBindingBuilder<::CompoundBlockVolumePositionRelativity, ::CompoundBlockVolumePositionRelativity>
        bindRelativeEnums();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
