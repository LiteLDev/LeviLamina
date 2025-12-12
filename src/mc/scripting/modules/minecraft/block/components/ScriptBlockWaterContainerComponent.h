#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockWaterContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockWaterContainerComponent& operator=(ScriptBlockWaterContainerComponent const&);
    ScriptBlockWaterContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockWaterContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockWaterContainerComponent(::ScriptModuleMinecraft::ScriptBlockWaterContainerComponent const&);

    MCNAPI ::Scripting::Result_deprecated<void> addDye(::ScriptModuleMinecraft::ScriptItemType const& dye);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockWaterContainerComponent>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockWaterContainerComponent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
