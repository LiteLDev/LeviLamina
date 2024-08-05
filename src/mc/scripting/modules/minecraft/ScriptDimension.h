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
class VecXZ;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
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
    ScriptDimension();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDimension() = default;

    MCAPI ScriptDimension(class ScriptModuleMinecraft::ScriptDimension const& rhs);

    MCAPI class Scripting::
        Result<bool, struct ScriptModuleMinecraft::ScriptUnloadedChunksError, struct Scripting::Error>
        containsBlock(
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockVolumeBase> const&,
            class ScriptModuleMinecraft::ScriptBlockFilter const&,
            bool
        ) const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    createExplosion(class Vec3 const& pos, float radius, std::optional<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const;

    MCAPI class Scripting::Result<void>
    createExplosion_V010(class Vec3 const& pos, float radius, struct Scripting::TypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptListBlockVolume>,
        struct ScriptModuleMinecraft::ScriptUnloadedChunksError,
        struct Scripting::EngineError,
        struct Scripting::Error>
    fillBlocks(std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockVolumeBase>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const&, std::optional<struct ScriptModuleMinecraft::ScriptBlockFillOptions> const&);

    MCAPI class Scripting::Result<std::optional<class Vec3>, struct Scripting::EngineError, struct Scripting::Error>
    findClosestBiome(class Vec3 const&, std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>, std::string> const&, std::optional<struct ScriptModuleMinecraft::ScriptBiomeSearchOptions>)
        const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(class Scripting::WeakLifetimeScope scope, class Vec3 const& position) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlockAbove(class Scripting::WeakLifetimeScope, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlockBelow(class Scripting::WeakLifetimeScope, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const;

    MCAPI class Scripting::Result<std::optional<class ScriptModuleMinecraft::ScriptBlockRaycastHit>> getBlockFromRay(
        class Scripting::WeakLifetimeScope                                            scope,
        class Vec3 const&                                                             pos,
        class Vec3 const&                                                             vector,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromRay_V010(
        class Scripting::WeakLifetimeScope                                            scope,
        class Vec3 const&                                                             pos,
        class ScriptModuleMinecraft::ScriptVector const&                              vector,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>
    getBlock_V010(class Scripting::WeakLifetimeScope scope, class BlockPos const& position);

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

    MCAPI class Dimension& getDimension() const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntities(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation(class Vec3 const& pos) const;

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation_V010(class BlockPos const& pos) const;

    MCAPI class Scripting::Result<std::vector<class ScriptModuleMinecraft::ScriptEntityRaycastHit>> getEntitiesFromRay(
        class Scripting::WeakLifetimeScope                                             scope,
        class Vec3 const&                                                              pos,
        class Vec3 const&                                                              vector,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromRay_V010(
        class Scripting::WeakLifetimeScope                                             scope,
        class Vec3 const&                                                              pos,
        class ScriptModuleMinecraft::ScriptVector const&                               vector,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>>
    getEntities_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI class Scripting::Result<struct Scripting::NumberRange> getHeightRange() const;

    MCAPI std::string getId() const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getTopmostBlock(class Scripting::WeakLifetimeScope, class VecXZ const&, std::optional<float>) const;

    MCAPI bool isEmpty_V010(class BlockPos const& position) const;

    MCAPI class ScriptModuleMinecraft::ScriptDimension& operator=(class ScriptModuleMinecraft::ScriptDimension&& rhs);

    MCAPI class Scripting::Result<void>
    playSound(std::string const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError>
    runCommand(
        class Scripting::DependencyLocator& locator,
        struct Scripting::ContextConfig const&,
        std::string const& commandString
    );

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

    MCAPI class Scripting::Result<struct Scripting::JSON>
    runCommand_V010(struct Scripting::ContextConfig const&, std::string const& commandString);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setBlockPermutation(class Vec3 const&, class ScriptModuleMinecraft::ScriptBlockPermutation const&);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setBlockType(class Vec3 const&, std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, std::string> const&);

    MCAPI class Scripting::Result<void> setWeather(::ScriptModuleMinecraft::ScriptWeatherType, std::optional<int>);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnEntity(std::string const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptSpawnEntityOptions> const&)
        const;

    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnEntity_V010(std::string const& identifier, std::variant<class BlockPos, class Vec3> const& pos) const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnEntity_V130(std::string const&, class Vec3 const&) const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const& pos) const;

    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(
        class ScriptModuleMinecraft::ScriptItemStack const&,
        std::variant<class BlockPos, class Vec3> const& pos
    ) const;

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

    MCAPI void spawnParticle_V010(
        std::string const&                                                                             effectName,
        class Vec3 const&                                                                              location,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap> molangVariables
    );

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDimension> bind();

    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptWeatherType>
    bindScriptWeatherType();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(class Dimension& dimension, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(DimensionType id, class Level& level, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    _spawnEntity(std::string const&, std::variant<class BlockPos, class Vec3> const&, bool) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
