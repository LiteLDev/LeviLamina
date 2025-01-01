#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptNavigationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                       mIsFullPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mPath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::Vec3> getPath() const;

    MCAPI ~ScriptNavigationResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleGameTest::ScriptNavigationResult> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
