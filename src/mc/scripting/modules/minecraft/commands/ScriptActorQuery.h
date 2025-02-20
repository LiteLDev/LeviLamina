#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorQuery {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::Error _incompatableWorldQueryOptionError(::std::string const& propertyName);

    MCAPI static ::Scripting::Result_deprecated<::ActorSelectorArgs> constructSelectorArgs(
        ::ActorSelectorType                                                      selectionType,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        ::Dimension*                                                             dimension
    );

    MCAPI static ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers(::Scripting::WeakLifetimeScope const& scope, ::Level& level);

    MCAPI static ::Scripting::Result_deprecated<bool> matches(::Actor const& actor, ::ActorSelectorArgs const& args);

    MCAPI static ::Scripting::Result_deprecated<bool>
    matches(::Actor const& actor, ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& options);

    MCAPI static ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    queryActors(
        ::ActorSelectorType                                                      options,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& scope,
        ::Scripting::WeakLifetimeScope const&                                    dimension,
        ::Dimension*                                                             level,
        ::Level&                                                                 selectionType
    );

    MCAPI static ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorIterator>>
    queryActors_V010(
        ::ActorSelectorType                                                      options,
        ::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> const& scope,
        ::Scripting::WeakLifetimeScope const&                                    dimension,
        ::Dimension*                                                             level,
        ::Level&                                                                 selectionType
    );

    MCAPI static ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
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
