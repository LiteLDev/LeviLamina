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
MCAPI_S void _addCommonEngineMetadata(::Json::Value& root, char const* type);

MCAPI_S void _addCommonVanillaMetadata(::Json::Value& jsonRoot, char const* type);

MCAPI_S void _addPrivilegeToArray(::Json::Value& arr, ::Scripting::Privilege privilege);

MCAPI_S void _generateAfterEventsOrderingDocumentation(
    ::Scripting::ScriptEngine const& scriptEngine,
    ::Core::Path const&              docsFolder
);

MCAPI_S ::Json::Value _generateBiomeMetadataJson(::BiomeRegistry const& biomes);

MCAPI_S ::Json::Value _generateBlocksMetadataJson();

MCAPI_S ::Json::Value _generateCameraMetadataJson(::CameraPresets const& presets);

MCAPI_S ::Json::Value _generateCooldownCategoriesMetadataJson(::ItemRegistryRef itemRegistry);

MCAPI_S ::Json::Value _generateDimensionsMetadataJson();

MCAPI_S ::Json::Value _generateEffectsMetadataJson();

MCAPI_S ::Json::Value _generateEnchantmentsMetadataJson();

MCAPI_S ::Json::Value _generateEntitiesMetadataJson(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI_S ::Json::Value _generateItemsMetadataJson(::ItemRegistryRef itemRegistry);

MCAPI_S ::Json::Value _generatePotionDeliveryTypesMetadataJson();

MCAPI_S ::Json::Value _generatePotionEffectsMetadataJson();

MCAPI_S ::Json::Value _generateScriptingModuleMetadataJson(
    ::Scripting::ModuleBinding const&          moduleToBind,
    ::Scripting::SupportedBindingModule const& moduleDescriptor,
    ::Scripting::ModuleBindingBundle const&    loadedModules
);

MCAPI_S ::Json::Value _generateStructureFeatureMetadataJson();

MCAPI_S ::std::unordered_map<::std::string, ::std::string> _getPropertyToEntityNameMap(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI_S void generateBiomeDocumentation(::Core::Path const& docsFolder, ::BiomeRegistry const& biomes);

MCAPI_S void generateCameraPresetDocumentation(::Core::Path const& docsFolder, ::CameraPresets const& presets);

MCAPI_S void generateCommandsDocumentation(::CommandRegistry& commandRegistry, ::Core::Path const& docsFolder);

MCAPI_S void generateCooldownCategoriesDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCAPI_S void generateEntitiesDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI_S void generateItemsDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCAPI_S void generateSchemaDataDocumentation(::Core::Path const& schemaDataFolder);

MCAPI_S void generateScriptingDocumentation(::Scripting::ScriptEngine& scriptEngine, ::Core::Path const& docsFolder);

MCAPI_S void generateVanillaDataDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCAPI ::std::string getGameSemVersionAsString();

MCAPI_S ::std::initializer_list<::AllExperiments> getRequiredExperimentsForMetadata();

MCAPI_S ::std::string scriptingVersionToString(::Scripting::Version const& version);

MCAPI_S bool validateVariantResolution(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                variantType,
    ::Scripting::ModuleBindingBundle const& loadedModules,
    ::std::string const&                    bindingName
);

MCAPI_S bool writeJsonMetadataToFile(::Json::Value const& json, ::Core::Path const& filepath);
// NOLINTEND

} // namespace CreatorMetadataUtils
