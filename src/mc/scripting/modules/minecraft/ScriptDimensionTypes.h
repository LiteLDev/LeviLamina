#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {

public:
    // prevent constructor by default
    ScriptDimensionTypes& operator=(ScriptDimensionTypes const&) = delete;
    ScriptDimensionTypes(ScriptDimensionTypes const&)            = delete;
    ScriptDimensionTypes()                                       = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptDimensionTypes\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptDimensionTypes\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDimensionTypes>
    bind(); // NOLINT
    /**
     * @symbol
     * ?fromString\@ScriptDimensionTypes\@ScriptModuleMinecraft\@\@SA?AV?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class AutomaticID<class Dimension, int> fromString(std::string const&); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?sMinecraftNamespace\@ScriptDimensionTypes\@ScriptModuleMinecraft\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sMinecraftNamespace; // NOLINT
};

}; // namespace ScriptModuleMinecraft
