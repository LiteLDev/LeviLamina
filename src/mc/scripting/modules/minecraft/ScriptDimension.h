#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class Level;
class Vec2;
class Vec3;
class VecXZ;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptActorType; }
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
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
namespace ScriptModuleMinecraft { struct ScriptBiomeSearchOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnEntityOptions; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct JSON; }
namespace Scripting { struct NumberRange; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct UnsupportedAPIError; }
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
        ::ll::UntypedStorage<4, 4> mUnkd53c77;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk57a70e;
    ::ll::UntypedStorage<8, 8>  mUnk27564b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimension& operator=(ScriptDimension const&);
    ScriptDimension(ScriptDimension const&);
    ScriptDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDimension() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>
    _spawnEntity(
        ::std::variant<::ScriptModuleMinecraft::ScriptActorType, ::std::string> const& identifier,
        ::std::variant<::BlockPos, ::Vec3> const&                                      pos,
        ::Vec2 const&                                                                  rotation,
        bool                                                                           initialPersistence,
        bool                                                                           allowActorDefinitionSpawnEvent,
        ::std::string const&                                                           spawnEvent
    ) const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptUnloadedChunksError, ::Scripting::Error>
    containsBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& blockVolumeBase,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&                                           filter,
        bool                                                                                        allowUnloadedChunks
    ) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    createExplosion(
        ::Vec3 const&                                                    pos,
        float                                                            radius,
        ::std::optional<::ScriptModuleMinecraft::ScriptExplosionOptions> explosionOptions
    ) const;

    MCNAPI ::Scripting::Result_deprecated<void> createExplosion_V010(
        ::Vec3 const&                                                                   pos,
        float                                                                           radius,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionOptions> explosionOptions
    ) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>,
        ::ScriptModuleMinecraft::ScriptUnloadedChunksError,
        ::Scripting::EngineError,
        ::Scripting::Error>
    fillBlocks(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& volume,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockFillOptions> const&                           options
    );

    MCNAPI ::Scripting::Result<::std::optional<::Vec3>, ::Scripting::EngineError, ::Scripting::Error> findClosestBiome(
        ::Vec3 const& pos,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>,
            ::std::string> const&                                          typeToFind,
        ::std::optional<::ScriptModuleMinecraft::ScriptBiomeSearchOptions> options
    ) const;

    MCNAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptBiomeType,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBiome(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(::Scripting::WeakLifetimeScope scope, ::Vec3 const& position) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockAbove(
        ::Scripting::WeakLifetimeScope                                             scope,
        ::Vec3 const&                                                              pos,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockBelow(
        ::Scripting::WeakLifetimeScope                                             scope,
        ::Vec3 const&                                                              pos,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastHit>>
    getBlockFromRay(
        ::Scripting::WeakLifetimeScope                                             scope,
        ::Vec3 const&                                                              pos,
        ::Vec3 const&                                                              vector,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromRay_V010(
        ::Scripting::WeakLifetimeScope                                             scope,
        ::Vec3 const&                                                              pos,
        ::ScriptModuleMinecraft::ScriptVector const&                               vector,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>
    getBlock_V010(::Scripting::WeakLifetimeScope scope, ::BlockPos const& position);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>,
        ::ScriptModuleMinecraft::ScriptUnloadedChunksError,
        ::Scripting::Error>
    getBlocks(
        ::Scripting::WeakLifetimeScope                                                              scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& blockVolumeBase,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&                                           filter,
        bool                                                                                        allowUnloadedChunks
    ) const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getEntities(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getEntitiesAtBlockLocation(::Vec3 const& pos) const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getEntitiesAtBlockLocation_V010(::BlockPos const& pos) const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::ScriptModuleMinecraft::ScriptEntityRaycastHit>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::Scripting::UnsupportedAPIError>
    getEntitiesFromRay(
        ::Scripting::WeakLifetimeScope                                              scope,
        ::Vec3 const&                                                               pos,
        ::Vec3 const&                                                               direction,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromRay_V010(
        ::Scripting::WeakLifetimeScope                                              scope,
        ::Vec3 const&                                                               pos,
        ::ScriptModuleMinecraft::ScriptVector const&                                vector,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorIterator>>
    getEntities_V010(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::std::string>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getGeneratedStructures(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::NumberRange> getHeightRange() const;

    MCNAPI ::std::string getId() const;

    MCNAPI ::Scripting::
        Result<int, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getLightLevel(::Vec3 const& location) const;

    MCNAPI ::std::string getLocalizationKey() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::InvalidArgumentError>
    getPlayers(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(::std::optional<::ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCNAPI ::Scripting::
        Result<int, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getSkyLightLevel(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getTopmostBlock(
        ::Scripting::WeakLifetimeScope scope,
        ::VecXZ const&                 locationXZ,
        ::std::optional<float>         minHeight
    ) const;

    MCNAPI bool isChunkLoaded(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::Error>
    placeFeature(::std::string const& featureName, ::Vec3 const& location, bool shouldThrowOnFailure) const;

    MCNAPI ::Scripting::
        Result<bool, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        placeFeatureRule(::std::string const& featureRuleName, ::Vec3 const& location) const;

    MCNAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> playSound(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
        ::ScriptModuleMinecraft::ScriptCommandError>
    runCommand(
        ::Scripting::DependencyLocator&   locator,
        ::Scripting::ContextConfig const& contextConfig,
        ::std::string const&              commandString
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(
        ::Scripting::DependencyLocator&   locator,
        ::Scripting::ContextConfig const& contextConfig,
        ::Scripting::ScriptObjectFactory& factory,
        ::std::string const&              commandString
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::JSON>
    runCommand_V010(::Scripting::ContextConfig const& contextConfig, ::std::string const& commandString);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setBlockPermutation(::Vec3 const& location, ::ScriptModuleMinecraft::ScriptBlockPermutation const& permutation);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setBlockType(
        ::Vec3 const& location,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& blockType
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    setWeather(::ScriptModuleMinecraft::ScriptWeatherType type, ::std::optional<int> duration);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>
    spawnEntity(
        ::std::variant<::ScriptModuleMinecraft::ScriptActorType, ::std::string> const& identifier,
        ::Vec3 const&                                                                  pos,
        ::std::optional<::ScriptModuleMinecraft::ScriptSpawnEntityOptions> const&      options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    spawnEntity_V010(::std::string const& identifier, ::std::variant<::BlockPos, ::Vec3> const& pos) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>
    spawnEntity_V130(::std::string const& identifier, ::Vec3 const& pos) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, ::Vec3 const& pos) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        ::std::variant<::BlockPos, ::Vec3> const&       pos
    ) const;

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    spawnParticle(
        ::std::string const& effectName,
        ::Vec3 const&        location,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>>
            molangVariables
    );

    MCNAPI void spawnParticle_V010(
        ::std::string const&                                                                   effectName,
        ::Vec3 const&                                                                          location,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap> molangVariables
    );

    MCNAPI void stopAllSounds();

    MCNAPI void stopSound(::std::string const& soundID);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindScriptWeatherType();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::DimensionType id, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
