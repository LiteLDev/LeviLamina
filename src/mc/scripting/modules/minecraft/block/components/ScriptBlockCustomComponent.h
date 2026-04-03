#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockCustomComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
