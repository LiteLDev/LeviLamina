#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptXYRotation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTXYROTATION
public:
    ScriptXYRotation& operator=(ScriptXYRotation const&) = delete;
    ScriptXYRotation(ScriptXYRotation const&)            = delete;
    ScriptXYRotation()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptXYRotation\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VVec2\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class Vec2> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptXYRotation\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptXYRotation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptXYRotation> bindV010();
};

}; // namespace ScriptModuleMinecraft
