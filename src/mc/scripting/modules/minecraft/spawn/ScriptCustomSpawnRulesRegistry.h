#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
class ServerLevel;
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { struct InvalidArgumentError; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomSpawnRulesRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // ScriptCustomSpawnRulesRegistry inner types define
    using EntityPredicate = ::std::function<
        bool(::br::spawn::EntityType const&, ::BlockSource&, ::br::spawn::EntitySpawnReason&, ::BlockPos, ::IRandom&)>;

    using ObstructionPredicate = ::std::function<bool(::BlockSource&, ::Mob const&, ::br::spawn::EntityType const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomSpawnRulesRegistry& operator=(ScriptCustomSpawnRulesRegistry const&);
    ScriptCustomSpawnRulesRegistry(ScriptCustomSpawnRulesRegistry const&);
    ScriptCustomSpawnRulesRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _onReload() /*override*/;

    virtual ~ScriptCustomSpawnRulesRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerEntitySpawnCallback(
        ::std::string const& id,
        ::std::function<bool(
            ::br::spawn::EntityType const&,
            ::BlockSource&,
            ::br::spawn::EntitySpawnReason&,
            ::BlockPos,
            ::IRandom&
        )>                   callback
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerObstructionCallback(
        ::std::string const&                                                                id,
        ::std::function<bool(::BlockSource&, ::Mob const&, ::br::spawn::EntityType const&)> callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_onReload();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
