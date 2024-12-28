#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemUtilities {
public:
    // prevent constructor by default
    ScriptItemUtilities& operator=(ScriptItemUtilities const&);
    ScriptItemUtilities(ScriptItemUtilities const&);
    ScriptItemUtilities();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::Result<schar, ::Scripting::Error> getCompostingChanceOrError(::ItemStackBase const& item);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
