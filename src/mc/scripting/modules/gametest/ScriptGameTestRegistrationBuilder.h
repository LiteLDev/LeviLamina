#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"

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

    MCAPI explicit ScriptGameTestRegistrationBuilder(
        std::shared_ptr<class ScriptModuleGameTest::BaseScriptGameTestFunction> gameTestFunction
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    batch(std::string batchName);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxAttempts(int maxAttempts);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    maxTicks(int maxTicks);

    MCAPI class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&
    operator=(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    padding(int blockPadding);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    required(bool required);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    requiredSuccessfulAttempts(int requiredSuccessfulAttempts);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    rotate(bool rotate);

    MCAPI void setScriptObjectHandle(
        class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> handle
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    setupTicks(int setupTicks);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    structureName(std::string structureName);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>
    tag(std::string tag);

    MCAPI ~ScriptGameTestRegistrationBuilder();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::shared_ptr<class ScriptModuleGameTest::BaseScriptGameTestFunction> gameTestFunction);

    MCAPI void* ctor$(class ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
