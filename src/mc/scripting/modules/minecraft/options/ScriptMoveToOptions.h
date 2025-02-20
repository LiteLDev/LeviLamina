#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptMoveToOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkc11c9f;
    ::ll::UntypedStorage<1, 2> mUnk49c1dd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMoveToOptions& operator=(ScriptMoveToOptions const&);
    ScriptMoveToOptions(ScriptMoveToOptions const&);
    ScriptMoveToOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::Error> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleGameTest::ScriptMoveToOptions> bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& FACE_TARGET_DEFAULT();

    MCAPI static float const& SPEED_DEFAULT();

    MCAPI static float const& SPEED_MIN();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
