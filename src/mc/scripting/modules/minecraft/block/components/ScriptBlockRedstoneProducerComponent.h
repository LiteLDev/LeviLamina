#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockDefinitionalComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockInvalidComponentError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRedstoneProducerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockDefinitionalComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockRedstoneProducerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        ::std::vector<::ScriptModuleMinecraft::ScriptFacing>,
        ::ScriptModuleMinecraft::ScriptBlockInvalidComponentError>
    getConnectedFaces() const;

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptBlockInvalidComponentError> getPower() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::ScriptModuleMinecraft::ScriptFacing>,
        ::ScriptModuleMinecraft::ScriptBlockInvalidComponentError>
    getStronglyPoweredFace() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
