#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleGameTest {

class ScriptGameTestDebug {

public:
    // prevent constructor by default
    ScriptGameTestDebug& operator=(ScriptGameTestDebug const&) = delete;
    ScriptGameTestDebug(ScriptGameTestDebug const&)            = delete;
    ScriptGameTestDebug()                                      = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptGameTestDebug\@ScriptModuleGameTest\@\@SA?AV?$ClassBindingBuilder\@VScriptGameTestDebug\@ScriptModuleGameTest\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptGameTestDebug> bind(); // NOLINT
    /**
     * @symbol
     * ?debugFail\@ScriptGameTestDebug\@ScriptModuleGameTest\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void debugFail(std::string const&); // NOLINT
};

}; // namespace ScriptModuleGameTest
