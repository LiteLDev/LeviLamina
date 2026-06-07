#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/property/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBoolBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mValidValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBoolBlockProperty& operator=(ScriptBoolBlockProperty const&);
    ScriptBoolBlockProperty(ScriptBoolBlockProperty const&);
    ScriptBoolBlockProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBoolBlockProperty(::ScriptModuleMinecraft::ScriptBoolBlockProperty&& rhs);

    MCAPI ScriptBoolBlockProperty(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::std::vector<bool>                                                                   validValues,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI ::Scripting::Result_deprecated<bool> getState() const;

    MCAPI ::ScriptModuleMinecraft::ScriptBoolBlockProperty&
    operator=(::ScriptModuleMinecraft::ScriptBoolBlockProperty&& rhs);

    MCAPI ::Scripting::Result_deprecated<void> setState(bool state);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBoolBlockProperty&& rhs);

    MCAPI void* $ctor(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::std::vector<bool>                                                                   validValues,
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
