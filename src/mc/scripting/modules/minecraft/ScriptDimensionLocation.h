#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptDimensionLocation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDIMENSIONLOCATION
public:
    ScriptDimensionLocation(ScriptDimensionLocation const&) = delete;
    ScriptDimensionLocation()                               = delete;
#endif

public:
    /**
     * @symbol ??4ScriptDimensionLocation\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptDimensionLocation&
    operator=(struct ScriptModuleMinecraft::ScriptDimensionLocation const&);
    /**
     * @symbol ??4ScriptDimensionLocation\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptDimensionLocation&
    operator=(struct ScriptModuleMinecraft::ScriptDimensionLocation&&);
    /**
     * @symbol ??1ScriptDimensionLocation\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptDimensionLocation();
    /**
     * @symbol
     * ?bind\@ScriptDimensionLocation\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptDimensionLocation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptDimensionLocation> bind();
};

}; // namespace ScriptModuleMinecraft
