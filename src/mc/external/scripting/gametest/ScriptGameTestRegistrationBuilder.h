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

public:
    // prevent constructor by default
    ScriptGameTestRegistrationBuilder& operator=(ScriptGameTestRegistrationBuilder const&) = delete;
    ScriptGameTestRegistrationBuilder(ScriptGameTestRegistrationBuilder const&)            = delete;
    ScriptGameTestRegistrationBuilder()                                                    = delete;

public:
    /**
     * @symbol ??0ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptGameTestRegistrationBuilder(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&); // NOLINT
    /**
     * @symbol
     * ??0ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA\@V?$shared_ptr\@VBaseScriptGameTestFunction\@ScriptModuleGameTest\@\@\@std\@\@\@Z
     */
    MCAPI ScriptGameTestRegistrationBuilder(class std::shared_ptr<
                                            class ScriptModuleGameTest::BaseScriptGameTestFunction>); // NOLINT
    /**
     * @symbol
     * ?batch\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        batch(std::string); // NOLINT
    /**
     * @symbol
     * ?maxAttempts\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxAttempts(int); // NOLINT
    /**
     * @symbol
     * ?maxTicks\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxTicks(int); // NOLINT
    /**
     * @symbol ??4ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&
    operator=(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&); // NOLINT
    /**
     * @symbol
     * ?padding\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    padding(int); // NOLINT
    /**
     * @symbol
     * ?required\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    required(bool); // NOLINT
    /**
     * @symbol
     * ?requiredSuccessfulAttempts\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    requiredSuccessfulAttempts(int); // NOLINT
    /**
     * @symbol
     * ?rotate\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    rotate(bool); // NOLINT
    /**
     * @symbol
     * ?setScriptObjectHandle\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAAXV?$WeakTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@\@Z
     */
    MCAPI void setScriptObjectHandle(class Scripting::WeakTypedObjectHandle<
                                     class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>); // NOLINT
    /**
     * @symbol
     * ?setupTicks\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    setupTicks(int); // NOLINT
    /**
     * @symbol
     * ?structureName\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        structureName(std::string); // NOLINT
    /**
     * @symbol
     * ?tag\@ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        tag(std::string); // NOLINT
    /**
     * @symbol ??1ScriptGameTestRegistrationBuilder\@ScriptModuleGameTest\@\@QEAA\@XZ
     */
    MCAPI ~ScriptGameTestRegistrationBuilder(); // NOLINT
};

}; // namespace ScriptModuleGameTest
