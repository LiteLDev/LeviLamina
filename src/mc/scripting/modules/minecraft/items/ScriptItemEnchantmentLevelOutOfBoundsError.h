#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError& operator=(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentLevelOutOfBoundsError(
        ::std::string const& details,
        ::std::string const& typeName,
        int                  level,
        int                  maxLevel
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& details, ::std::string const& typeName, int level, int maxLevel);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
