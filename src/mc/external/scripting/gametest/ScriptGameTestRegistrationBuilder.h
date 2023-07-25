#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class BaseScriptGameTestFunction; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestRegistrationBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEGAMETEST_SCRIPTGAMETESTREGISTRATIONBUILDER
public:
    ScriptGameTestRegistrationBuilder& operator=(ScriptGameTestRegistrationBuilder const&) = delete;
    ScriptGameTestRegistrationBuilder(ScriptGameTestRegistrationBuilder const&)            = delete;
    ScriptGameTestRegistrationBuilder()                                                    = delete;
#endif

public:
    /**
     * @symbol ??0ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptGameTestRegistrationBuilder(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);
    /**
     * @symbol
     * ??0ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA\@V?$shared_ptr\@VBaseScriptGameTestFunction\@ScriptModuleGameTest\@\@\@std\@\@\@Z
     */
    MCAPI ScriptGameTestRegistrationBuilder(class std::shared_ptr<
                                            class ScriptModuleGameTest::BaseScriptGameTestFunction>);
    /**
     * @symbol
     * ?batch\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        batch(std::string);
    /**
     * @symbol
     * ?maxAttempts\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxAttempts(int);
    /**
     * @symbol
     * ?maxTicks\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxTicks(int);
    /**
     * @symbol ??4ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&
    operator=(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);
    /**
     * @symbol
     * ?padding\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    padding(int);
    /**
     * @symbol
     * ?required\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    required(bool);
    /**
     * @symbol
     * ?requiredSuccessfulAttempts\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    requiredSuccessfulAttempts(int);
    /**
     * @symbol
     * ?rotate\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    rotate(bool);
    /**
     * @symbol
     * ?setScriptObjectHandle\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAAXV?$WeakTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@\@Z
     */
    MCAPI void setScriptObjectHandle(class Scripting::WeakTypedObjectHandle<
                                     class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>);
    /**
     * @symbol
     * ?setupTicks\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    setupTicks(int);
    /**
     * @symbol
     * ?structureName\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        structureName(std::string);
    /**
     * @symbol
     * ?tag\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        tag(std::string);
    /**
     * @symbol ??1ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA\@XZ
     */
    MCAPI ~ScriptGameTestRegistrationBuilder();
};

}; // namespace ScriptModuleGameTest
