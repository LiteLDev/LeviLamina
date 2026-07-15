#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Level;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimension {
public:
    // ScriptDimension inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptDimension inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::DimensionType> mId;
        // NOLINTEND
    };

    using SpawnEntityResult = ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>;

    using SpawnEntityResult_Internal = ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Dimension*>>   mDimension;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDimension() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(::Scripting::WeakLifetimeScope scope, ::Vec3 const& position) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::EnumBinding bindScriptWeatherType();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::DimensionType id, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
