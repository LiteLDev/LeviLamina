#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorSelectorType.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
struct ActorSelectorArgs;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorQuery {
public:
    // prevent constructor by default
    ScriptActorQuery& operator=(ScriptActorQuery const&);
    ScriptActorQuery(ScriptActorQuery const&);
    ScriptActorQuery();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::Result<struct ActorSelectorArgs>
    constructSelectorArgs(::ActorSelectorType, std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&, class Dimension*);

    MCAPI static class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers(class Scripting::WeakLifetimeScope const& scope, class Level& level);

    MCAPI static class Scripting::Result<bool>
    matches(class Actor const&, std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&);

    MCAPI static class Scripting::Result<bool> matches(class Actor const&, struct ActorSelectorArgs const&);

    MCAPI static class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    queryActors(
        ::ActorSelectorType,
        std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        class Scripting::WeakLifetimeScope const&                                   scope,
        class Dimension*                                                            dimension,
        class Level&                                                                level
    );

    MCAPI static class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>>
    queryActors_V010(
        ::ActorSelectorType,
        std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        class Scripting::WeakLifetimeScope const&                                   scope,
        class Dimension*                                                            dimension,
        class Level&                                                                level
    );

    MCAPI static class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    queryPlayers(
        std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        class Scripting::WeakLifetimeScope const&                                   scope,
        class Dimension*                                                            dimension,
        class Level&                                                                level
    );

    MCAPI static class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
    queryPlayers_V010(
        std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const& options,
        class Scripting::WeakLifetimeScope const&                                   scope,
        class Dimension*                                                            dimension,
        class Level&                                                                level
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct Scripting::Error _incompatableWorldQueryOptionError(std::string const& propertyName);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
