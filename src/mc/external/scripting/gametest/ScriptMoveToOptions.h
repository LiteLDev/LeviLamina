#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptMoveToOptions {
public:
    // prevent constructor by default
    ScriptMoveToOptions& operator=(ScriptMoveToOptions const&);
    ScriptMoveToOptions(ScriptMoveToOptions const&);
    ScriptMoveToOptions();

public:
    // NOLINTBEGIN
    MCAPI bool getFaceTarget() const;

    MCAPI float getSpeed() const;

    MCAPI std::optional<struct Scripting::Error> validate() const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleGameTest::ScriptMoveToOptions> bindV1();

    MCAPI static bool const FACE_TARGET_DEFAULT;

    MCAPI static float const SPEED_DEFAULT;

    MCAPI static float const SPEED_MIN;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
