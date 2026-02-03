#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/GraphicsMode.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptGraphicsMode {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bind();

    MCAPI static ::GraphicsMode getModeFromString(::std::string const& str);

    MCAPI static ::std::string getModeName(::GraphicsMode mode);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
