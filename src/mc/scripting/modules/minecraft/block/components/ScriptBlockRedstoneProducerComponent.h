#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRedstoneProducerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCFOLD static ::std::optional<::Scripting::Release> overrideEnumVersion();

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockRedstoneProducerComponent>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
