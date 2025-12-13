#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlockInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkcc943d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockInventoryComponent& operator=(ScriptBlockInventoryComponent const&);
    ScriptBlockInventoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockInventoryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockInventoryComponent(::ScriptModuleMinecraft::ScriptBlockInventoryComponent const&);

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>>>
    getOrCreateContainer();

    MCNAPI ::Scripting::Result_deprecated<::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockInventoryComponentContainer>>>
    getOrCreateContainerV010();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockInventoryComponent>>
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockInventoryComponent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
