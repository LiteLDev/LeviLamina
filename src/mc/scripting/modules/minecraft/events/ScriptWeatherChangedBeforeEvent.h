#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
struct LevelWeatherChangedEvent;
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
    // member functions
    // NOLINTBEGIN
    MCAPI void copyTo(::LevelWeatherChangedEvent& weatherChangedEvent) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
