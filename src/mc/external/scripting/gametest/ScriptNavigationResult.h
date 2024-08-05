#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptNavigationResult {
public:
    // prevent constructor by default
    ScriptNavigationResult& operator=(ScriptNavigationResult const&);
    ScriptNavigationResult(ScriptNavigationResult const&);
    ScriptNavigationResult();

public:
    // NOLINTBEGIN
    MCAPI std::vector<class Vec3> getPath() const;

    MCAPI ~ScriptNavigationResult();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleGameTest::ScriptNavigationResult> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
