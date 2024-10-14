#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

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
    MCAPI void addCursorsWithOffset(class Vec3 const& offset, int charge);

    MCAPI class Scripting::Result<class Vec3> getCursorPosition(int index) const;

    MCAPI class Scripting::Result<int> getMaxCharge() const;

    MCAPI class Scripting::Result<int> getNumberOfCursors() const;

    MCAPI class Scripting::Result<int> getTotalCharge() const;

    MCAPI class ScriptModuleGameTest::ScriptSculkSpreader&
    operator=(class ScriptModuleGameTest::ScriptSculkSpreader&& rhs);

    MCAPI ~ScriptSculkSpreader();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptSculkSpreader> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
