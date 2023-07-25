#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptSeat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSEAT
public:
    ScriptSeat& operator=(ScriptSeat const&) = delete;
    ScriptSeat(ScriptSeat const&)            = delete;
    ScriptSeat()                             = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptSeat\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@USeatDescription\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct SeatDescription> bind();
};

}; // namespace ScriptModuleMinecraft
