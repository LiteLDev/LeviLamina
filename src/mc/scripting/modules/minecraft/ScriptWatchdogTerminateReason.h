#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptWatchdogTerminateReason {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTWATCHDOGTERMINATEREASON
public:
    ScriptWatchdogTerminateReason& operator=(ScriptWatchdogTerminateReason const&) = delete;
    ScriptWatchdogTerminateReason(ScriptWatchdogTerminateReason const&)            = delete;
    ScriptWatchdogTerminateReason()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptWatchdogTerminateReason\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4WatchdogTerminateReason\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class WatchdogTerminateReason> bind();
};

}; // namespace ScriptModuleMinecraft
