#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptEntitySpawnType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnType>>
                                                                                mEntitySpawnType;
    ::ll::TypedStorage<2, 2, ::br::spawn::EntitySpawnReason>                    mEntitySpawnReason;
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptDimensionLocation> mDimensionLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnCallbackArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEntitySpawnCallbackArgs(
        ::Scripting::WeakLifetimeScope scope,
        ::br::spawn::EntityType const& entityType,
        ::br::spawn::EntitySpawnReason entitySpawnReason,
        ::BlockSource&                 region,
        ::Vec3                         position
    );

    MCAPI ~ScriptEntitySpawnCallbackArgs();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope scope,
        ::br::spawn::EntityType const& entityType,
        ::br::spawn::EntitySpawnReason entitySpawnReason,
        ::BlockSource&                 region,
        ::Vec3                         position
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
