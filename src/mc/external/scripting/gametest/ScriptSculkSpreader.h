#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSculkSpreader {
public:
    // prevent constructor by default
    ScriptSculkSpreader& operator=(ScriptSculkSpreader const&);
    ScriptSculkSpreader(ScriptSculkSpreader const&);
    ScriptSculkSpreader();

public:
    // NOLINTBEGIN
    // symbol: ?addCursorsWithOffset@ScriptSculkSpreader@ScriptModuleGameTest@@QEAAXAEBVVec3@@H@Z
    MCAPI void addCursorsWithOffset(class Vec3 const& offset, int charge);

    // symbol: ?getCursorPosition@ScriptSculkSpreader@ScriptModuleGameTest@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<class Vec3> getCursorPosition(int index) const;

    // symbol: ?getMaxCharge@ScriptSculkSpreader@ScriptModuleGameTest@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getMaxCharge() const;

    // symbol: ?getNumberOfCursors@ScriptSculkSpreader@ScriptModuleGameTest@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getNumberOfCursors() const;

    // symbol: ?getTotalCharge@ScriptSculkSpreader@ScriptModuleGameTest@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getTotalCharge() const;

    // symbol: ??1ScriptSculkSpreader@ScriptModuleGameTest@@QEAA@XZ
    MCAPI ~ScriptSculkSpreader();

    // symbol:
    // ?bind@ScriptSculkSpreader@ScriptModuleGameTest@@SA?AV?$ClassBindingBuilder@VScriptSculkSpreader@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptSculkSpreader> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
