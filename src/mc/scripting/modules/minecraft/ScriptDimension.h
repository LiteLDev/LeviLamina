#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class Level;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBiomeSearchOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnEntityOptions; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct JSON; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimension {
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
    // ?containsBlock@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptUnloadedChunksError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBV?$StrongTypedObjectHandle@VScriptBlockVolumeBase@ScriptModuleMinecraft@@@4@AEBVScriptBlockFilter@2@_N@Z
    MCAPI class Scripting::
        Result<bool, struct ScriptModuleMinecraft::ScriptUnloadedChunksError, struct Scripting::Error>
        containsBlock(
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockVolumeBase> const&,
            class ScriptModuleMinecraft::ScriptBlockFilter const&,
            bool
        ) const;

    // symbol:
    // ?createExplosion@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVVec3@@MV?$optional@UScriptExplosionOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    createExplosion(class Vec3 const& pos, float radius, std::optional<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const;

    // symbol:
    // ?createExplosion_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBVVec3@@MU?$TypedObjectHandle@UScriptExplosionOptions@ScriptModuleMinecraft@@@4@@Z
    MCAPI class Scripting::Result<void>
    createExplosion_V010(class Vec3 const& pos, float radius, struct Scripting::TypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const;

    // symbol:
    // ?fillBlocks@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@I$$V@Scripting@@AEBVVec3@@0AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@4@@std@@AEBV?$optional@UScriptBlockFillOptions@ScriptModuleMinecraft@@@7@@Z
    MCAPI class Scripting::Result<uint> fillBlocks(
        class Vec3 const& begin,
        class Vec3 const& end,
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const& block,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockFillOptions> const& options
    );

    // symbol:
    // ?findClosestBiome@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@VVec3@@@std@@UEngineError@Scripting@@UError@4@@Scripting@@AEBVVec3@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBiomeType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$optional@UScriptBiomeSearchOptions@ScriptModuleMinecraft@@@7@@Z
    MCAPI class Scripting::Result<std::optional<class Vec3>, struct Scripting::EngineError, struct Scripting::Error>
    findClosestBiome(class Vec3 const&, std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>, std::string> const&, std::optional<struct ScriptModuleMinecraft::ScriptBiomeSearchOptions>)
        const;

    // symbol:
    // ?getBlock@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(class Scripting::WeakLifetimeScope scope, class Vec3 const& position) const;

    // symbol:
    // ?getBlockFromRay@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@VScriptBlockRaycastHit@ScriptModuleMinecraft@@@std@@$$V@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@1AEBV?$optional@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<std::optional<class ScriptModuleMinecraft::ScriptBlockRaycastHit>> getBlockFromRay(
        class Scripting::WeakLifetimeScope                                            scope,
        class Vec3 const&                                                             pos,
        class Vec3 const&                                                             vector,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    // symbol:
    // ?getBlockFromRay_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@AEBVScriptVector@2@AEBV?$optional@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromRay_V010(
        class Scripting::WeakLifetimeScope                                            scope,
        class Vec3 const&                                                             pos,
        class ScriptModuleMinecraft::ScriptVector const&                              vector,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    // symbol:
    // ?getBlock_V010@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@VWeakLifetimeScope@4@AEBVBlockPos@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>
    getBlock_V010(class Scripting::WeakLifetimeScope scope, class BlockPos const& position);

    // symbol:
    // ?getBlocks@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptListBlockVolume@ScriptModuleMinecraft@@@Scripting@@UScriptUnloadedChunksError@ScriptModuleMinecraft@@UError@2@@Scripting@@VWeakLifetimeScope@4@AEBV?$StrongTypedObjectHandle@VScriptBlockVolumeBase@ScriptModuleMinecraft@@@4@AEBVScriptBlockFilter@2@_N@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptListBlockVolume>,
        struct ScriptModuleMinecraft::ScriptUnloadedChunksError,
        struct Scripting::Error>
    getBlocks(
        class Scripting::WeakLifetimeScope,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockVolumeBase> const&,
        class ScriptModuleMinecraft::ScriptBlockFilter const&,
        bool
    ) const;

    // symbol: ?getDimension@ScriptDimension@ScriptModuleMinecraft@@QEBAAEAVDimension@@XZ
    MCAPI class Dimension& getDimension() const;

    // symbol:
    // ?getEntities@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntities(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    // symbol:
    // ?getEntitiesAtBlockLocation@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@AEBVVec3@@@Z
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation(class Vec3 const& pos) const;

    // symbol:
    // ?getEntitiesAtBlockLocation_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@AEBVBlockPos@@@Z
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation_V010(class BlockPos const& pos) const;

    // symbol:
    // ?getEntitiesFromRay@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$vector@VScriptEntityRaycastHit@ScriptModuleMinecraft@@V?$allocator@VScriptEntityRaycastHit@ScriptModuleMinecraft@@@std@@@std@@VWeakLifetimeScope@Scripting@@AEBVVec3@@1AEBV?$optional@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@4@@Z
    MCAPI std::vector<class ScriptModuleMinecraft::ScriptEntityRaycastHit> getEntitiesFromRay(
        class Scripting::WeakLifetimeScope                                             scope,
        class Vec3 const&                                                              pos,
        class Vec3 const&                                                              vector,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    // symbol:
    // ?getEntitiesFromRay_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@VWeakLifetimeScope@4@AEBVVec3@@AEBVScriptVector@2@AEBV?$optional@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromRay_V010(
        class Scripting::WeakLifetimeScope                                             scope,
        class Vec3 const&                                                              pos,
        class ScriptModuleMinecraft::ScriptVector const&                               vector,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    // symbol:
    // ?getEntities_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActorIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>>
    getEntities_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    // symbol:
    // ?getHeightRange@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@UNumberRange@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<struct Scripting::NumberRange> getHeightRange() const;

    // symbol:
    // ?getId@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId() const;

    // symbol:
    // ?getPlayers@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    // symbol:
    // ?getPlayers_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptPlayerIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    // symbol: ?isEmpty_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA_NAEBVBlockPos@@@Z
    MCAPI bool isEmpty_V010(class BlockPos const& position) const;

    // symbol: ??4ScriptDimension@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptDimension& operator=(class ScriptModuleMinecraft::ScriptDimension&& rhs);

    // symbol:
    // ?playSound@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$optional@UScriptWorldSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playSound(std::string const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);

    // symbol:
    // ?runCommand@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@@Scripting@@AEAVDependencyLocator@4@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError>
    runCommand(
        class Scripting::DependencyLocator& locator,
        struct Scripting::ContextConfig const&,
        std::string const& commandString
    );

    // symbol:
    // ?runCommandAsync@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$Promise@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@X@Scripting@@$$V@Scripting@@AEAVDependencyLocator@4@AEBUContextConfig@4@AEAVScriptObjectFactory@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(
        class Scripting::DependencyLocator& locator,
        struct Scripting::ContextConfig const&,
        class Scripting::ScriptObjectFactory& factory,
        std::string const&                    commandString
    );

    // symbol:
    // ?runCommand_V010@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@UJSON@Scripting@@$$V@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<struct Scripting::JSON>
    runCommand_V010(struct Scripting::ContextConfig const&, std::string const& commandString);

    // symbol:
    // ?setBlockPermutation@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVVec3@@AEBVScriptBlockPermutation@2@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setBlockPermutation(class Vec3 const&, class ScriptModuleMinecraft::ScriptBlockPermutation const&);

    // symbol:
    // ?setBlockType@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@AEBVVec3@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setBlockType(class Vec3 const&, std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, std::string> const&);

    // symbol:
    // ?setWeather@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@W4ScriptWeatherType@2@V?$optional@H@std@@@Z
    MCAPI class Scripting::Result<void> setWeather(::ScriptModuleMinecraft::ScriptWeatherType, std::optional<int>);

    // symbol:
    // ?spawnEntity@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@AEBV?$optional@UScriptSpawnEntityOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnEntity(std::string const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptSpawnEntityOptions> const&)
        const;

    // symbol:
    // ?spawnEntity_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@VBlockPos@@VVec3@@@6@@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnEntity_V010(std::string const& identifier, std::variant<class BlockPos, class Vec3> const& pos) const;

    // symbol:
    // ?spawnEntity_V130@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnEntity_V130(std::string const&, class Vec3 const&) const;

    // symbol:
    // ?spawnItem@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBVScriptItemStack@2@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const& pos) const;

    // symbol:
    // ?spawnItem_V010@ScriptDimension@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBVScriptItemStack@2@AEBV?$variant@VBlockPos@@VVec3@@@std@@@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(
        class ScriptModuleMinecraft::ScriptItemStack const&,
        std::variant<class BlockPos, class Vec3> const& pos
    ) const;

    // symbol:
    // ?spawnParticle@ScriptDimension@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$optional@V?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@@6@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnParticle(
        std::string const& effectName,
        class Vec3 const&  location,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>>
            molangVariables
    );

    // symbol:
    // ?spawnParticle_V010@ScriptDimension@ScriptModuleMinecraft@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void spawnParticle_V010(
        std::string const&                                                                             effectName,
        class Vec3 const&                                                                              location,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap> molangVariables
    );

    // symbol:
    // ?bind@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDimension> bind();

    // symbol:
    // ?bindScriptWeatherType@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptWeatherType@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptWeatherType>
    bindScriptWeatherType();

    // symbol:
    // ?getOrCreateHandle@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@AEAVDimension@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(class Dimension& dimension, class Scripting::WeakLifetimeScope const& scope);

    // symbol:
    // ?getOrCreateHandle@ScriptDimension@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@V?$AutomaticID@VDimension@@H@@AEAVLevel@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(DimensionType id, class Level& level, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_spawnEntity@ScriptDimension@ScriptModuleMinecraft@@AEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@VBlockPos@@VVec3@@@6@_N@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    _spawnEntity(std::string const&, std::variant<class BlockPos, class Vec3> const&, bool) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
