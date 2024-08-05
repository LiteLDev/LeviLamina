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
    ScriptGameTestRegistrationBuilder& operator=(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder();

public:
    // NOLINTBEGIN
    MCAPI ScriptGameTestRegistrationBuilder(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

    MCAPI explicit ScriptGameTestRegistrationBuilder(std::shared_ptr<
                                                     class ScriptModuleGameTest::BaseScriptGameTestFunction>);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
        batch(std::string);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxAttempts(int);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxTicks(int);

    MCAPI class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&
    operator=(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    padding(int);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    required(bool required);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    requiredSuccessfulAttempts(int);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    rotate(bool rotate);

    MCAPI void setScriptObjectHandle(
        class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> handle
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    setupTicks(int);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    structureName(std::string structureName);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    tag(std::string tag);

    MCAPI ~ScriptGameTestRegistrationBuilder();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
