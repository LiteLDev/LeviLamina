#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
enum class WatchdogTerminateReason;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWatchdogTerminateReason {

public:
    // prevent constructor by default
    ScriptWatchdogTerminateReason& operator=(ScriptWatchdogTerminateReason const&) = delete;
    ScriptWatchdogTerminateReason(ScriptWatchdogTerminateReason const&)            = delete;
    ScriptWatchdogTerminateReason()                                                = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptWatchdogTerminateReason\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4WatchdogTerminateReason\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class WatchdogTerminateReason> bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
