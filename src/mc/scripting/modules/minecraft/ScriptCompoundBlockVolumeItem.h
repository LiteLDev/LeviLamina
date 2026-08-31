#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptSimpleBlockVolume.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolumeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptSimpleBlockVolume>        mVolume;
    ::ll::TypedStorage<4, 8, ::std::optional<::CompoundBlockVolumePositionRelativity>> mRelativity;
    ::ll::TypedStorage<4, 8, ::std::optional<::CompoundBlockVolumeAction>>             mAction;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
