#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockDefinitionalComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockCustomComponent : public ::ScriptModuleMinecraft::BaseScriptBlockDefinitionalComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters>>
        mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponent& operator=(ScriptBlockCustomComponent const&);
    ScriptBlockCustomComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockCustomComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponent(::ScriptModuleMinecraft::ScriptBlockCustomComponent const&);

    MCAPI ScriptBlockCustomComponent(
        ::BlockSource&       region,
        ::BlockPos           position,
        ::std::string const& name,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
                                              parameters,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponent const&);

    MCAPI void* $ctor(
        ::BlockSource&       region,
        ::BlockPos           position,
        ::std::string const& name,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
                                              parameters,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
