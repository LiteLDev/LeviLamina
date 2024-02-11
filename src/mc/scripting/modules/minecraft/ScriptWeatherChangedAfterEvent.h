#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEvent {
public:
    // prevent constructor by default
    ScriptWeatherChangedAfterEvent& operator=(ScriptWeatherChangedAfterEvent const&);
    ScriptWeatherChangedAfterEvent(ScriptWeatherChangedAfterEvent const&);
    ScriptWeatherChangedAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>
    bind();

    // symbol:
    // ?bindV010@ScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptWeatherChangedAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
