#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
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

    MCAPI ::Scripting::Result<::InputMode, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError>
    getLastInputModeUsed() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> isHotbarOnlyTouch() const;

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
