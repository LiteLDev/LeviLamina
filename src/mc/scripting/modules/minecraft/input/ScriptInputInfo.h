#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInputInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptInputInfo(::ScriptModuleMinecraft::ScriptActorData const& playerData);

    MCAPI void updatePlayerData(::ScriptModuleMinecraft::ScriptActorData const& playerData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const& playerData);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
