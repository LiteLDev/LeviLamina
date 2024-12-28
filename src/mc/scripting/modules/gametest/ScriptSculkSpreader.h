#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk731900;
    ::ll::UntypedStorage<8, 8>  mUnka70c1b;
    ::ll::UntypedStorage<4, 12> mUnk6529e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSculkSpreader& operator=(ScriptSculkSpreader const&);
    ScriptSculkSpreader(ScriptSculkSpreader const&);
    ScriptSculkSpreader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::Vec3> getCursorPosition(int index) const;

    MCAPI ::Scripting::Result_deprecated<int> getMaxCharge() const;

    MCAPI ::Scripting::Result_deprecated<int> getNumberOfCursors() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalCharge() const;

    MCAPI ~ScriptSculkSpreader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleGameTest::ScriptSculkSpreader> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
