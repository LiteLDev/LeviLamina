#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/world/actor/selectors/ActorSelectorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Level;
struct ActorSelectorArgs;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorQuery {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::UnsupportedAPIError _incompatableWorldQueryOptionError(::std::string const& propertyName);

    MCAPI static ::Scripting::
        Result<::ActorSelectorArgs, ::Scripting::InvalidArgumentError, ::Scripting::UnsupportedAPIError>
        constructSelectorArgs(
            ::ActorSelectorType                                                      selectionType,
            ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
            ::Dimension*                                                             dimension
        );

    MCAPI static ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getAllPlayers(::Scripting::WeakLifetimeScope const& scope, ::Level& level);

    MCAPI static ::Scripting::Result<bool, ::Scripting::InvalidArgumentError, ::Scripting::UnsupportedAPIError>
    matches(::Actor const& actor, ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options);

    MCAPI static ::Scripting::Result<bool, ::Scripting::InvalidArgumentError>
    matches(::Actor const& actor, ::ActorSelectorArgs const& args);

    MCAPI static ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    queryActors(
        ::ActorSelectorType                                                      selectionType,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
    );

    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorIterator>>
    queryActors_V010(
        ::ActorSelectorType                                                      selectionType,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
    );

    MCAPI static ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    queryPlayers(
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
    );

    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerIterator>>
    queryPlayers_V010(
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                    scope,
        ::Dimension*                                                             dimension,
        ::Level&                                                                 level
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
