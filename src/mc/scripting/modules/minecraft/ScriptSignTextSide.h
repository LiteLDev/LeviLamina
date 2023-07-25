#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptSignTextSide {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSIGNTEXTSIDE
public:
    ScriptSignTextSide& operator=(ScriptSignTextSide const&) = delete;
    ScriptSignTextSide(ScriptSignTextSide const&)            = delete;
    ScriptSignTextSide()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptSignTextSide\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4SignTextSide\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class SignTextSide> bind();
};

}; // namespace ScriptModuleMinecraft
