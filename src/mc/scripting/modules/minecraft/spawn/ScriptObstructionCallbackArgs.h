#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptEntitySpawnType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptObstructionCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnType>>
        mEntitySpawnType;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
        mDimension;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptObstructionCallbackArgs();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ScriptObstructionCallbackArgs(
        ::Scripting::WeakLifetimeScope scope,
        ::br::spawn::EntityType const& entityType,
        ::BlockSource&                 region,
        ::Mob const&                   mob
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope scope,
        ::br::spawn::EntityType const& entityType,
        ::BlockSource&                 region,
        ::Mob const&                   mob
    );
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
