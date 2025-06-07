#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypeNotCompatibleError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemEnchantmentTypeNotCompatibleError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptItemEnchantmentTypeNotCompatibleError(::std::string const& typeName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& typeName);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
