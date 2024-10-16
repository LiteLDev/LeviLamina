#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

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
    MCAPI std::vector<class Vec3> getPath() const;

    MCAPI ~ScriptNavigationResult();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleGameTest::ScriptNavigationResult> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
