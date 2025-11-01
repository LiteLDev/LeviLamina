#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestRegistrationBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7216f9;
    ::ll::UntypedStorage<8, 16> mUnke6eaae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestRegistrationBuilder& operator=(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder(ScriptGameTestRegistrationBuilder const&);
    ScriptGameTestRegistrationBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> batch(::std::string batchName);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> maxAttempts(int maxAttempts);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> maxTicks(int maxTicks);

    MCNAPI ::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder& operator=(::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder&&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> padding(int blockPadding);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> required(bool required);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> requiredSuccessfulAttempts(int requiredSuccessfulAttempts);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> rotate(bool rotate);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> setupTicks(int setupTicks);

    MCNAPI ::Scripting::Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder>, ::Scripting::InvalidArgumentError, ::Scripting::EngineError> structureLocation(::Vec3 structureLocation, ::std::optional<::std::variant<::ScriptModuleMinecraft::ScriptDimensionType, ::std::string>> dimensionTypeVar);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> structureName(::std::string structureName);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestRegistrationBuilder> tag(::std::string tag);
    // NOLINTEND

};

}
