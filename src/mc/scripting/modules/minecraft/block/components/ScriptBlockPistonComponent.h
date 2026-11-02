#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlockPistonComponentContainer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPistonComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponentContainer>>
        mScriptContainer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> isExpanded();

    MCNAPI ::Scripting::Result_deprecated<bool> isExpanding();

    MCNAPI ::Scripting::Result_deprecated<bool> isMoving();

    MCNAPI ::Scripting::Result_deprecated<bool> isRetracted();

    MCNAPI ::Scripting::Result_deprecated<bool> isRetracting();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponent>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
