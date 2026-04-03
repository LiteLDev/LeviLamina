#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponentV010.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSnowContainerComponentV010
: public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockSnowContainerComponentV010() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockSnowContainerComponentV010>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
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
