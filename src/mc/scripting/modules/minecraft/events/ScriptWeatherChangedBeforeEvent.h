#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4e017f;
    ::ll::UntypedStorage<4, 4> mUnka50c48;
    ::ll::UntypedStorage<4, 4> mUnkcde1f8;
    ::ll::UntypedStorage<1, 1> mUnk3baf08;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeatherChangedBeforeEvent& operator=(ScriptWeatherChangedBeforeEvent const&);
    ScriptWeatherChangedBeforeEvent(ScriptWeatherChangedBeforeEvent const&);
    ScriptWeatherChangedBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
