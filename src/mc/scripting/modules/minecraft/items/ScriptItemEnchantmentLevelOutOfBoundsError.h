#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemEnchantmentLevelOutOfBoundsError(
        ::std::string const& details,
        ::std::string const& typeName,
        int                  level,
        int                  maxLevel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& details, ::std::string const& typeName, int level, int maxLevel);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
