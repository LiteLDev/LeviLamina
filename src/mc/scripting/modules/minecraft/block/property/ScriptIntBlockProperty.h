#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/property/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptIntBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mValidValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptIntBlockProperty& operator=(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptIntBlockProperty(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::std::vector<int>                                                                    validValues,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI ::ScriptModuleMinecraft::ScriptIntBlockProperty&
    operator=(::ScriptModuleMinecraft::ScriptIntBlockProperty&& rhs);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::std::vector<int>                                                                    validValues,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
