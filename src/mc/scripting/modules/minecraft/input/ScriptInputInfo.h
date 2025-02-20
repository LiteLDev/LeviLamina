#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/scripting/runtime/Result.h"

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
    ::ll::UntypedStorage<8, 96> mUnk1fab8f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputInfo& operator=(ScriptInputInfo const&);
    ScriptInputInfo(ScriptInputInfo const&);
    ScriptInputInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<::InputMode, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError>
    getLastInputModeUsed() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> isHotbarOnlyTouch() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
