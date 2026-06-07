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
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
// clang-format on

namespace CreatorMetadataUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI void _addCommonEngineMetadata(::Json::Value& root, char const* type);

MCAPI void _addCommonVanillaMetadata(::Json::Value& jsonRoot, char const* type);

MCAPI void _addOptionalPrivilegeName(::Json::Value& root, ::Scripting::FunctionBinding function);

MCAPI void _addOptionalPrivilegeName(::Json::Value& root, ::Scripting::PropertyBinding property);

MCAPI void _addPrivilegeToArray(::Json::Value& arr, ::Scripting::Privilege privilege);

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

MCAPI ::Json::Value _generateMolangMathFunctionsMetadataJson();

MCAPI ::Json::Value _generateMolangQueriesArrayJson();

MCAPI ::Json::Value _generateMolangQueriesMetadataJson();

MCAPI ::Json::Value _generatePotionDeliveryTypesMetadataJson();

MCAPI ::Json::Value _generatePotionEffectsMetadataJson();

MCAPI ::Json::Value _generateScriptingModuleMetadataJson(
    ::Scripting::ModuleBinding const&          moduleToBind,
    ::Scripting::SupportedBindingModule const& moduleDescriptor,
    ::Scripting::ModuleBindingBundle const&    loadedModules
);

MCAPI ::Json::Value _generateStructureFeatureMetadataJson();

MCAPI ::std::unordered_map<::std::string, ::std::string> _getPropertyToEntityNameMap(
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI ::std::optional<::Scripting::Privilege> _tryGetPrivilegeTypeOfClosureTemplateType(::entt::meta_type const& type);

MCAPI void generateBiomeDocumentation(::Core::Path const& docsFolder, ::BiomeRegistry const& biomes);

MCAPI void generateBlocksDocumentation(::Core::Path const& docsFolder);

MCAPI void generateCameraPresetDocumentation(::Core::Path const& docsFolder, ::CameraPresets const& presets);

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
    ::BiomeRegistry const&                                                           biomes
);

MCAPI void generateDimensionsDocumentation(::Core::Path const& docsFolder);

MCAPI void generateEffectsDocumentation(::Core::Path const& docsFolder);

MCAPI void generateEnchantmentsDocumentation(::Core::Path const& docsFolder);

MCAPI void generateEntitiesDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList
);

MCAPI void generateItemsDocumentation(::Core::Path const& docsFolder, ::ItemRegistryRef itemRegistry);

MCAPI void generateMolangQueriesDocumentation(::Core::Path const& docsFolder);

MCAPI void generatePotionDeliveryTypesDocumentation(::Core::Path const& docsFolder);

MCAPI void generatePotionEffectsDocumentation(::Core::Path const& docsFolder);

MCAPI void generateSchemaDataDocumentation(::Core::Path const& schemaDataFolder);

MCAPI void generateScriptingDocumentation(::Scripting::ScriptEngine& scriptEngine, ::Core::Path const& docsFolder);

MCAPI void generateStructureFeatureDocumentation(::Core::Path const& docsFolder);

MCAPI void generateVanillaDataDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);
#endif

MCAPI ::std::string getGameSemVersionAsString();

#ifdef LL_PLAT_S
MCAPI ::std::initializer_list<::AllExperiments> getRequiredExperimentsForMetadata();

MCAPI ::std::string scriptingVersionToString(::Scripting::Version const& version);

MCAPI bool validateVariantResolution(
    ::Scripting::ModuleBinding const& variantType,
    ::entt::meta_type const&          loadedModules,
    ::Scripting::ModuleBindingBundle const&,
    ::std::string const&
);

MCAPI bool writeJsonMetadataToFile(::Json::Value const& json, ::Core::Path const& filepath);
#endif
// NOLINTEND

} // namespace CreatorMetadataUtils
