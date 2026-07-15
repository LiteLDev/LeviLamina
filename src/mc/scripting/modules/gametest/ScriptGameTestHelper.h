#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestSequence; }
namespace Scripting { struct ClassBinding; }
namespace gametest { class BaseGameTestHelper; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestHelper&> mTestHelper;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>>
        mScriptHandle;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ScriptModuleGameTest::ScriptGameTestSequence>>>
        mSequences;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestHelper& operator=(ScriptGameTestHelper const&);
    ScriptGameTestHelper(ScriptGameTestHelper const&);
    ScriptGameTestHelper();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
