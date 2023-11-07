#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class Level;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct JSON; }
struct FloatRange;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimension {
public:
    // ScriptDimension inner types define
    enum class ScriptWeatherType {};

public:
    // prevent constructor by default
    ScriptDimension& operator=(ScriptDimension const&);
    ScriptDimension(ScriptDimension const&);
    ScriptDimension();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptDimension@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptDimension() = default;

    // symbol:
    // ?createExplosion@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVVec3@@MV?$optional@UScriptExplosionOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    createExplosion(class Vec3 const&, float, std::optional<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const;

    // symbol:
    // ?createExplosion_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@MU?$TypedObjectHandle@UScriptExplosionOptions@ScriptModuleMinecraft@@@4@@Z
    MCAPI class Scripting::Result<void>
    createExplosion_V010(class Vec3 const&, float, struct Scripting::TypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const;

    // symbol:
    // ?fillBlocks@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@I$$V@Scripting@@AEBVVec3@@0AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@4@@std@@AEBV?$optional@UScriptBlockFillOptions@ScriptModuleMinecraft@@@7@@Z
    MCAPI class
        Scripting::
            Result<uint>
            fillBlocks(class Vec3 const&, class Vec3 const&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const&, std::optional<struct ScriptModuleMinecraft::ScriptBlockFillOptions> const&);

    // symbol:
    // ?getBlock@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(class Scripting::WeakLifetimeScope, class Vec3 const&) const;

    // symbol:
    // ?getBlockFromRay@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$optional@VScriptBlockRaycastHit@ScriptModuleMinecraft@@@std@@VWeakLifetimeScope@Scripting@@AEBVVec3@@1AEBV?$optional@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@4@@Z
    MCAPI std::optional<class ScriptModuleMinecraft::ScriptBlockRaycastHit>
    getBlockFromRay(class Scripting::WeakLifetimeScope, class Vec3 const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const;

    // symbol:
    // ?getBlockFromRay_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@AEBVScriptVector@2@AEBV?$optional@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>
    getBlockFromRay_V010(class Scripting::WeakLifetimeScope, class Vec3 const&, class ScriptModuleMinecraft::ScriptVector const&, std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const;

    // symbol:
    // ?getBlock_V010@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@VWeakLifetimeScope@4@AEBVBlockPos@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>
    getBlock_V010(class Scripting::WeakLifetimeScope, class BlockPos const&);

    // symbol: ?getDimension@ScriptDimension@ScriptModuleMinecraft@@QEBAAEAVDimension@@XZ
    MCAPI class Dimension& getDimension() const;

    // symbol:
    // ?getEntities@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
        getEntities(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const;

    // symbol:
    // ?getEntitiesAtBlockLocation@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@AEBVVec3@@@Z
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation(class Vec3 const&) const;

    // symbol:
    // ?getEntitiesAtBlockLocation_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@AEBVBlockPos@@@Z
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation_V010(class BlockPos const&) const;

    // symbol:
    // ?getEntitiesFromRay@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$vector@VScriptEntityRaycastHit@ScriptModuleMinecraft@@V?$allocator@VScriptEntityRaycastHit@ScriptModuleMinecraft@@@std@@@std@@VWeakLifetimeScope@Scripting@@AEBVVec3@@1AEBV?$optional@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@4@@Z
    MCAPI std::vector<class ScriptModuleMinecraft::ScriptEntityRaycastHit>
    getEntitiesFromRay(class Scripting::WeakLifetimeScope, class Vec3 const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&)
        const;

    // symbol:
    // ?getEntitiesFromRay_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@AEBVScriptVector@2@AEBV?$optional@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromRay_V010(class Scripting::WeakLifetimeScope, class Vec3 const&, class ScriptModuleMinecraft::ScriptVector const&, std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&)
        const;

    // symbol:
    // ?getEntities_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActorIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>>
        getEntities_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const;

    // symbol: ?getHeightRange@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@UFloatRange@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<struct FloatRange> getHeightRange() const;

    // symbol:
    // ?getId@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId() const;

    // symbol:
    // ?getPlayers@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
        getPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const;

    // symbol:
    // ?getPlayers_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptPlayerIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
        getPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const;

    // symbol: ?isEmpty_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isEmpty_V010(class BlockPos const&) const;

    // symbol: ??4ScriptDimension@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptDimension& operator=(class ScriptModuleMinecraft::ScriptDimension&&);

    // symbol:
    // ?runCommand@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@@Scripting@@AEAVDependencyLocator@4@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError>
    runCommand(class Scripting::DependencyLocator&, struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?runCommandAsync@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$Promise@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@X@Scripting@@$$V@Scripting@@AEAVDependencyLocator@4@AEBUContextConfig@4@AEAVScriptObjectFactory@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(class Scripting::DependencyLocator&, struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory&, std::string const&);

    // symbol:
    // ?runCommand_V010@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@UJSON@Scripting@@$$V@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<struct Scripting::JSON>
    runCommand_V010(struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?setWeather@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@W4ScriptWeatherType@12@V?$optional@H@std@@@Z
    MCAPI class Scripting::Result<void>
        setWeather(::ScriptModuleMinecraft::ScriptDimension::ScriptWeatherType, std::optional<int>);

    // symbol:
    // ?spawnEntity@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnEntity(std::string const&, class Vec3 const&) const;

    // symbol:
    // ?spawnEntity_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@VBlockPos@@VVec3@@@6@@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnEntity_V010(std::string const&, std::variant<class BlockPos, class Vec3> const&) const;

    // symbol:
    // ?spawnItem@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBVScriptItemStack@2@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&) const;

    // symbol:
    // ?spawnItem_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBVScriptItemStack@2@AEBV?$variant@VBlockPos@@VVec3@@@std@@@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(class ScriptModuleMinecraft::ScriptItemStack const&, std::variant<class BlockPos, class Vec3> const&)
        const;

    // symbol:
    // ?spawnParticle@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$optional@V?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@@6@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnParticle(std::string const&, class Vec3 const&, std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>>);

    // symbol:
    // ?spawnParticle_V010@ScriptDimension@ScriptModuleMinecraft@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void
    spawnParticle_V010(std::string const&, class Vec3 const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>);

    // symbol:
    // ?bind@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDimension> bind();

    // symbol:
    // ?bindScriptWeatherType@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptWeatherType@ScriptDimension@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::
        EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptDimension::ScriptWeatherType>
        bindScriptWeatherType();

    // symbol:
    // ?getOrCreateHandle@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@AEAVDimension@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(class Dimension&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?getOrCreateHandle@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@V?$AutomaticID@VDimension@@H@@AEAVLevel@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(DimensionType, class Level&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
