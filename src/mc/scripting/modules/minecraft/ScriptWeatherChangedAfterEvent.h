#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTWEATHERCHANGEDAFTEREVENT
public:
    ScriptWeatherChangedAfterEvent& operator=(ScriptWeatherChangedAfterEvent const&) = delete;
    ScriptWeatherChangedAfterEvent(ScriptWeatherChangedAfterEvent const&)            = delete;
    ScriptWeatherChangedAfterEvent()                                                 = delete;
#endif

public:
    /**
     * @symbol ??4ScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent&&);
    /**
     * @symbol
     * ?bind\@ScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>
    bind();
    /**
     * @symbol
     * ?bindV010\@ScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWeatherChangedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
