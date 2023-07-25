#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockPlaceAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKPLACEAFTEREVENT
public:
    ScriptBlockPlaceAfterEvent& operator=(ScriptBlockPlaceAfterEvent const&) = delete;
    ScriptBlockPlaceAfterEvent(ScriptBlockPlaceAfterEvent const&)            = delete;
    ScriptBlockPlaceAfterEvent()                                             = delete;
#endif

public:
    /**
     * @symbol ??4ScriptBlockPlaceAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent&&);
    /**
     * @symbol ??1ScriptBlockPlaceAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockPlaceAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptBlockPlaceAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptBlockPlaceAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockPlaceAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
