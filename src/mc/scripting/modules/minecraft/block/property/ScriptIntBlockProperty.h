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

class ScriptIntBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7a923a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptIntBlockProperty& operator=(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptIntBlockProperty() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptIntBlockProperty(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::std::vector<int>                                                                    validValues,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCNAPI ::Scripting::Result_deprecated<int> getState() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptIntBlockProperty& operator=(::ScriptModuleMinecraft::ScriptIntBlockProperty&&
    );

    MCNAPI ::Scripting::Result_deprecated<void> setState(int state);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
