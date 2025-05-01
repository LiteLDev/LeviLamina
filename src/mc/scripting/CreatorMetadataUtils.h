#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"
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
// clang-format on

namespace CreatorMetadataUtils {
// functions
// NOLINTBEGIN
MCNAPI void _addCommonEngineMetadata(::Json::Value& root, char const* type);

MCNAPI void _addCommonVanillaMetadata(::Json::Value& jsonRoot, char const* type);

MCNAPI void _addPrivilegeToArray(::Json::Value& arr, ::Scripting::Privilege privilege);

MCNAPI void _generateAfterEventsOrderingDocumentation(
    ::Scripting::ScriptEngine const& scriptEngine,
    ::Core::Path const&              docsFolder
);

MCNAPI ::Json::Value _generateBiomeMetadataJson(::BiomeRegistry const& biomes);

MCNAPI ::Json::Value _generateBlocksMetadataJson();

MCNAPI ::Json::Value _generateCameraMetadataJson(::CameraPresets const& presets);

MCNAPI ::Json::Value _generateCooldownCategoriesMetadataJson(::ItemRegistryRef itemRegistry);

MCNAPI ::Json::Value _generateDimensionsMetadataJson();

MCNAPI ::Json::Value _generateEffectsMetadataJson();

MCNAPI ::Json::Value _generateEnchantmentsMetadataJson();

MCNAPI ::Json::Value _generateEntitiesMetadataJson(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCNAPI ::Json::Value _generateItemsMetadataJson(::ItemRegistryRef itemRegistry);

MCNAPI ::Json::Value _generatePotionEffectsMetadataJson();

MCNAPI ::Json::Value _generatePotionLiquidTypesMetadataJson();

MCNAPI ::Json::Value _generatePotionModifiersMetadataJson();

MCNAPI ::Json::Value _generateScriptingModuleMetadataJson(
    ::Scripting::ModuleBinding const&          moduleToBind,
    ::Scripting::SupportedBindingModule const& moduleDescriptor,
    ::Scripting::ModuleBindingBundle const&    loadedModules
);

MCNAPI ::Json::Value _generateStructureFeatureMetadataJson();

MCNAPI ::std::unordered_map<::std::string, ::std::string> _getPropertyToEntityNameMap(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCNAPI void generateCommandsDocumentation(::CommandRegistry& commandRegistry, ::Core::Path const& docsFolder);

MCNAPI void generateCooldownCategoriesDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCNAPI void generateItemsDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCNAPI void generateSchemaDataDocumentation(::Core::Path const& schemaDataFolder);

MCNAPI void generateScriptingDocumentation(::Scripting::ScriptEngine& scriptEngine, ::Core::Path const& docsFolder);

MCNAPI void generateVanillaDataDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCNAPI ::std::string getGameSemVersionAsString();

MCNAPI ::std::initializer_list<::AllExperiments> getRequiredExperimentsForMetadata();

MCNAPI ::std::string scriptingVersionToString(::Scripting::Version const& version);

MCNAPI bool writeJsonMetadataToFile(::Json::Value const& json, ::Core::Path const& filepath);
// NOLINTEND

} // namespace CreatorMetadataUtils
