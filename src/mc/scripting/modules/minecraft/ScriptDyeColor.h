#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptDyeColor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDYECOLOR
public:
    ScriptDyeColor& operator=(ScriptDyeColor const&) = delete;
    ScriptDyeColor(ScriptDyeColor const&)            = delete;
    ScriptDyeColor()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptDyeColor\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemColor\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class ItemColor> bind();
};

}; // namespace ScriptModuleMinecraft
