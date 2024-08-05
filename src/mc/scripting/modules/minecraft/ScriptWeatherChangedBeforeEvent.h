#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct LevelWeatherChangedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedBeforeEvent {
public:
    // prevent constructor by default
    ScriptWeatherChangedBeforeEvent& operator=(ScriptWeatherChangedBeforeEvent const&);
    ScriptWeatherChangedBeforeEvent(ScriptWeatherChangedBeforeEvent const&);
    ScriptWeatherChangedBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI void copyTo(struct LevelWeatherChangedEvent&) const;

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
