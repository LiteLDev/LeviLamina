#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace ScriptModuleMinecraft { class ScriptEntitySpawnCallbackArgs; }
namespace ScriptModuleMinecraft { class ScriptObstructionCallbackArgs; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpawnRulesRegistry {
public:
    // ScriptSpawnRulesRegistry inner types define
    using EntitySpawnCallback = ::Scripting::Closure<
        bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)>;

    using ObstructionCallback = ::Scripting::Closure<
        bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpawnRulesRegistry& operator=(ScriptSpawnRulesRegistry const&);
    ScriptSpawnRulesRegistry(ScriptSpawnRulesRegistry const&);
    ScriptSpawnRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptSpawnRulesRegistry(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry& registry);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerEntitySpawnCallback(
        ::Scripting::WeakLifetimeScope scope,
        ::std::string const&           id,
        ::Scripting::Closure<
            bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)> callback
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerObstructionCallback(
        ::Scripting::WeakLifetimeScope scope,
        ::std::string const&           id,
        ::Scripting::Closure<
            bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)> callback
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static bool entitySpawnCallbackHandler(
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<
            bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEntitySpawnCallbackArgs>)> const&
                                        callback,
        ::br::spawn::EntityType const&  entityType,
        ::BlockSource&                  region,
        ::br::spawn::EntitySpawnReason& spawnReason,
        ::BlockPos                      blockPosition
    );

    MCAPI static bool obstructionCallbackHandler(
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<
            bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptObstructionCallbackArgs>)> const&
                                       callback,
        ::BlockSource&                 region,
        ::Mob const&                   mob,
        ::br::spawn::EntityType const& entityType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry& registry);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
