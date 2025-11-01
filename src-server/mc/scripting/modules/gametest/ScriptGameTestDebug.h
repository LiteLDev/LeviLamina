#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestDebug {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static void debugFail(::std::string const& message);

    MCNAPI static void timeout(int seconds);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
