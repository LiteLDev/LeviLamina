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
    // symbol: ?getFaceTarget@ScriptMoveToOptions@ScriptModuleGameTest@@QEBA_NXZ
    MCAPI bool getFaceTarget() const;

    // symbol: ?getSpeed@ScriptMoveToOptions@ScriptModuleGameTest@@QEBAMXZ
    MCAPI float getSpeed() const;

    // symbol: ?validate@ScriptMoveToOptions@ScriptModuleGameTest@@QEBA?AV?$optional@UError@Scripting@@@std@@XZ
    MCAPI std::optional<struct Scripting::Error> validate() const;

    // symbol:
    // ?bindV1@ScriptMoveToOptions@ScriptModuleGameTest@@SA?AV?$InterfaceBindingBuilder@UScriptMoveToOptions@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleGameTest::ScriptMoveToOptions> bindV1();

    // symbol: ?FACE_TARGET_DEFAULT@ScriptMoveToOptions@ScriptModuleGameTest@@2_NB
    MCAPI static bool const FACE_TARGET_DEFAULT;

    // symbol: ?SPEED_DEFAULT@ScriptMoveToOptions@ScriptModuleGameTest@@2MB
    MCAPI static float const SPEED_DEFAULT;

    // symbol: ?SPEED_MIN@ScriptMoveToOptions@ScriptModuleGameTest@@2MB
    MCAPI static float const SPEED_MIN;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
