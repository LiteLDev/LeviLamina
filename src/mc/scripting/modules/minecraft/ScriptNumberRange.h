#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptNumberRange {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTNUMBERRANGE
public:
    ScriptNumberRange& operator=(ScriptNumberRange const&) = delete;
    ScriptNumberRange(ScriptNumberRange const&)            = delete;
    ScriptNumberRange()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptNumberRange\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UFloatRange\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct FloatRange> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptNumberRange\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UFloatRange\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct FloatRange> bindV010();
};

}; // namespace ScriptModuleMinecraft
