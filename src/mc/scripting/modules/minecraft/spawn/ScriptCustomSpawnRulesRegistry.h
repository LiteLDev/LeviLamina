#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/level/spawn/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnRulesInvalidRegistryError; }
namespace Scripting { struct InvalidArgumentError; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomSpawnRulesRegistry {
public:
    // ScriptCustomSpawnRulesRegistry inner types define
    enum class State : int {
        PreInit               = 0,
        ScriptLoaded          = 1,
        Finalized             = 2,
        ReloadingPreInit      = 3,
        ReloadingScriptLoaded = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf7db7b;
    ::ll::UntypedStorage<4, 4> mUnk2be200;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomSpawnRulesRegistry& operator=(ScriptCustomSpawnRulesRegistry const&);
    ScriptCustomSpawnRulesRegistry(ScriptCustomSpawnRulesRegistry const&);
    ScriptCustomSpawnRulesRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
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

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::Scripting::InvalidArgumentError>
    registerObstructionCallback(
        ::std::string const&                                                                id,
        ::std::function<bool(::BlockSource&, ::Mob const&, ::br::spawn::EntityType const&)> callback
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
