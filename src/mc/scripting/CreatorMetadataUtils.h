#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
// clang-format on

namespace CreatorMetadataUtils {
// NOLINTBEGIN
MCAPI void _addCommonEngineMetadata(class Json::Value& root, char const* type);

MCAPI void _addCommonVanillaMetadata(class Json::Value& jsonRoot, char const* type);

MCAPI void _addOptionalPrivilegeName(class Json::Value& root, ::Scripting::Privilege privilege);

MCAPI void _generateAfterEventsOrderingDocumentation(
    class Scripting::ScriptEngine const& scriptEngine,
    class Core::Path const&              docsFolder
);

MCAPI class Json::Value _generateBiomeMetadataJson(class BiomeRegistry const& biomes);

MCAPI class Json::Value _generateBlocksMetadataJson();

MCAPI class Json::Value _generateCameraMetadataJson(class CameraPresets const& presets);

MCAPI class Json::Value _generateCooldownCategoriesMetadataJson(class ItemRegistryRef itemRegistry);

MCAPI class Json::Value _generateDimensionsMetadataJson();

MCAPI class Json::Value _generateEffectsMetadataJson();

MCAPI class Json::Value _generateEnchantmentsMetadataJson();

MCAPI class Json::Value _generateEntitiesMetadataJson(
    std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const& actorDefinitionList
);

MCAPI class Json::Value _generateItemsMetadataJson(class ItemRegistryRef itemRegistry);

MCAPI class Json::Value _generateScriptingModuleMetadataJson(
    struct Scripting::ModuleBinding const&          moduleToBind,
    struct Scripting::SupportedBindingModule const& moduleDescriptor,
    struct Scripting::ModuleBindingBundle const&    loadedModules
);

MCAPI class Json::Value _generateStructureFeatureMetadataJson();

MCAPI std::unordered_map<std::string, std::string> _getPropertyToEntityNameMap(
    std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const& actorDefinitionList
);

MCAPI void generateBiomeDocumentation(class Core::Path const& docsFolder, class BiomeRegistry const& biomes);

MCAPI void generateBlocksDocumentation(class Core::Path const& docsFolder);

MCAPI void generateCameraPresetDocumentation(class Core::Path const& docsFolder, class CameraPresets const& presets);

MCAPI void generateCommandsDocumentation(class CommandRegistry& commandRegistry, class Core::Path const& docsFolder);

MCAPI void
generateCooldownCategoriesDocumentation(class Core::Path const& docsFolder, class ItemRegistryRef itemRegistry);

MCAPI void generateCreatorScriptingMetadata(
    class Scripting::ScriptEngine&                                                 scriptEngine,
    class Core::Path const&                                                        scriptModuleFolder,
    class Core::Path const&                                                        vanillaDataFolder,
    class Core::Path const&                                                        engineDataFolder,
    class ItemRegistryRef                                                          itemRegistry,
    std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const& actorDefinitionList,
    class CameraPresets const&                                                     presets,
    class BiomeRegistry const&                                                     biomes
);

MCAPI void generateDimensionsDocumentation(class Core::Path const& docsFolder);

MCAPI void generateEffectsDocumentation(class Core::Path const& docsFolder);

MCAPI void generateEnchantmentsDocumentation(class Core::Path const& docsFolder);

MCAPI void generateEntitiesDocumentation(
    class Core::Path const&                                                        docsFolder,
    std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const& actorDefinitionList
);

MCAPI void generateItemsDocumentation(class Core::Path const& docsFolder, class ItemRegistryRef itemRegistry);

MCAPI void
generateScriptingDocumentation(class Scripting::ScriptEngine& scriptEngine, class Core::Path const& docsFolder);

MCAPI void generateStructureFeatureDocumentation(class Core::Path const& docsFolder);

MCAPI std::string getGameSemVersionAsString();

MCAPI std::initializer_list<::AllExperiments> getRequiredExperimentsForMetadata();

MCAPI std::string scriptingVersionToString(struct Scripting::Version const& version);

MCAPI bool writeJsonMetadataToFile(class Json::Value const& json, class Core::Path const& filepath);
// NOLINTEND

}; // namespace CreatorMetadataUtils
