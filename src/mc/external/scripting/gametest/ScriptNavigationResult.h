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
    bool                        mIsFullPath; // this+0x0
    std::vector<class BlockPos> mPath;       // this+0x8

public:
    // NOLINTBEGIN
    // symbol:
    // ?getPath@ScriptNavigationResult@ScriptModuleGameTest@@QEBA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@XZ
    MCAPI std::vector<class Vec3> getPath() const;

    // symbol: ??1ScriptNavigationResult@ScriptModuleGameTest@@QEAA@XZ
    MCAPI ~ScriptNavigationResult();

    // symbol:
    // ?bind@ScriptNavigationResult@ScriptModuleGameTest@@SA?AV?$ClassBindingBuilder@UScriptNavigationResult@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleGameTest::ScriptNavigationResult> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
