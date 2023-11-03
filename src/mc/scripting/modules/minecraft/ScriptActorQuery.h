#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorSelectorType.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Level;
class Player;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace Scripting { class WeakLifetimeScope; }
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
    // symbol:
    // ?createActorIterator@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptActorIterator@ScriptModuleMinecraft@@@Scripting@@$$QEAV?$CommandSelectorResults@VActor@@@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>
    createActorIterator(class CommandSelectorResults<class Actor>&&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?createPlayerIterator@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptPlayerIterator@ScriptModuleMinecraft@@@Scripting@@$$QEAV?$CommandSelectorResults@VPlayer@@@@AEBVWeakLifetimeScope@4@PEBVDimension@@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>
    createPlayerIterator(class CommandSelectorResults<class Player>&&, class Scripting::WeakLifetimeScope const&, class Dimension const*);

    // symbol:
    // ?getAllPlayers@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@AEBVWeakLifetimeScope@4@AEAVLevel@@@Z
    MCAPI static class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers(class Scripting::WeakLifetimeScope const&, class Level&);

    // symbol:
    // ?matches@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$Result@_N$$V@Scripting@@AEBVActor@@AEBV?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI static class Scripting::Result<bool>
    matches(class Actor const&, std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&);

    // symbol:
    // ?queryActors@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@W4ActorSelectorType@@AEBV?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@AEBVWeakLifetimeScope@4@PEAVDimension@@AEAVLevel@@@Z
    MCAPI static class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    queryActors(::ActorSelectorType, std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&, class Scripting::WeakLifetimeScope const&, class Dimension*, class Level&);

    // symbol:
    // ?queryActors_V010@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActorIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@W4ActorSelectorType@@AEBV?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@AEBVWeakLifetimeScope@4@PEAVDimension@@AEAVLevel@@@Z
    MCAPI static class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>>
    queryActors_V010(::ActorSelectorType, std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&, class Scripting::WeakLifetimeScope const&, class Dimension*, class Level&);

    // symbol:
    // ?queryPlayers@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@AEBV?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@AEBVWeakLifetimeScope@4@PEAVDimension@@AEAVLevel@@@Z
    MCAPI static class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    queryPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&, class Scripting::WeakLifetimeScope const&, class Dimension*, class Level&);

    // symbol:
    // ?queryPlayers_V010@ScriptActorQuery@ScriptModuleMinecraft@@SA?AV?$Result@V?$StrongTypedObjectHandle@VScriptPlayerIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@AEBVWeakLifetimeScope@4@PEAVDimension@@AEAVLevel@@@Z
    MCAPI static class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
    queryPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> const&, class Scripting::WeakLifetimeScope const&, class Dimension*, class Level&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
