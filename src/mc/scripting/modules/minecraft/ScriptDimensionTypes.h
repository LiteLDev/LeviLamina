#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/world/AutomaticID.h"

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDIMENSIONTYPES
public:
    ScriptDimensionTypes& operator=(ScriptDimensionTypes const&) = delete;
    ScriptDimensionTypes(ScriptDimensionTypes const&)            = delete;
    ScriptDimensionTypes()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptDimensionTypes\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptDimensionTypes\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDimensionTypes> bind();
    /**
     * @symbol
     * ?fromString\@ScriptDimensionTypes\@ScriptModuleMinecraft\@\@SA?AV?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class AutomaticID<class Dimension, int> fromString(std::string const&);

    // private:

private:
    /**
     * @symbol
     * ?sMinecraftNamespace\@ScriptDimensionTypes\@ScriptModuleMinecraft\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sMinecraftNamespace;
};

}; // namespace ScriptModuleMinecraft
