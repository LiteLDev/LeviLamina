#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class BiomeRegistry;
class CameraPresets;
class CommandRegistry;
class ItemRegistryRef;
namespace Core { class Path; }
namespace Json { class Value; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CreatorMetadataUtils {
// functions
// NOLINTBEGIN
MCAPI void _addCommonEngineMetadata(::Json::Value& root, char const* type);

MCAPI void _addCommonVanillaMetadata(::Json::Value& jsonRoot, char const* type);

MCAPI void _addOptionalPrivilegeName(::Json::Value& root, ::Scripting::Privilege privilege);

MCAPI void _generateAfterEventsOrderingDocumentation(
    ::Scripting::ScriptEngine const& scriptEngine,
    ::Core::Path const&              docsFolder
);

MCAPI ::Json::Value _generateBiomeMetadataJson(::BiomeRegistry const& biomes);

MCAPI ::Json::Value _generateBlocksMetadataJson();

MCAPI ::Json::Value _generateCameraMetadataJson(::CameraPresets const& presets);

MCAPI ::Json::Value _generateCooldownCategoriesMetadataJson(::ItemRegistryRef itemRegistry);

MCAPI ::Json::Value _generateDimensionsMetadataJson();

MCAPI ::Json::Value _generateEffectsMetadataJson();

MCAPI ::Json::Value _generateEnchantmentsMetadataJson();

MCAPI ::Json::Value _generateEntitiesMetadataJson(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI ::Json::Value _generateItemsMetadataJson(::ItemRegistryRef itemRegistry);

MCAPI ::Json::Value _generatePotionEffectsMetadataJson();

MCAPI ::Json::Value _generatePotionLiquidTypesMetadataJson();

MCAPI ::Json::Value _generatePotionModifiersMetadataJson();

MCAPI ::Json::Value _generateScriptingModuleMetadataJson(
    ::Scripting::ModuleBinding const&          moduleToBind,
    ::Scripting::SupportedBindingModule const& moduleDescriptor,
    ::Scripting::ModuleBindingBundle const&    loadedModules
);

MCAPI ::Json::Value _generateStructureFeatureMetadataJson();

MCAPI ::std::unordered_map<::std::string, ::std::string> _getPropertyToEntityNameMap(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI void generateCommandsDocumentation(::CommandRegistry& commandRegistry, ::Core::Path const& docsFolder);

MCAPI void generateCooldownCategoriesDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCAPI void generateCreatorScriptingMetadata(
    ::Scripting::ScriptEngine&                                                       scriptEngine,
    ::Core::Path const&                                                              scriptModuleFolder,
    ::Core::Path const&                                                              vanillaDataFolder,
    ::Core::Path const&                                                              engineDataFolder,
    ::Core::Path const&                                                              schemaDataFolder,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes,
    ::cereal::ReflectionCtx&                                                         reflectionCtx
);

MCAPI void generateItemsDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCAPI void
generateSchemaDataDocumentation(::Core::Path const& schemaDataFolder, ::cereal::ReflectionCtx& reflectionCtx);

MCAPI void generateScriptingDocumentation(::Scripting::ScriptEngine& scriptEngine, ::Core::Path const& docsFolder);

MCAPI void generateVanillaDataDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCAPI ::std::string getGameSemVersionAsString();

MCAPI ::std::initializer_list<::AllExperiments> getRequiredExperimentsForMetadata();

MCAPI ::std::string scriptingVersionToString(::Scripting::Version const& version);

MCAPI bool writeJsonMetadataToFile(::Json::Value const& json, ::Core::Path const& filepath);
// NOLINTEND

} // namespace CreatorMetadataUtils
