#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemUtilities {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::Result_deprecated<schar> getCompostingChanceOrError(::ItemStackBase const& item);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
