#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/external/scripting/Privilege.h"

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
MCAPI void _addCommonEngineMetadata(class Json::Value&, char const*);

MCAPI void _addCommonVanillaMetadata(class Json::Value&, char const* type);

MCAPI void _addOptionalPrivilegeName(class Json::Value& root, ::Scripting::Privilege);

MCAPI void _generateAfterEventsOrderingDocumentation(class Scripting::ScriptEngine const&, class Core::Path const&);

MCAPI class Json::Value _generateBiomeMetadataJson(class BiomeRegistry const&);

MCAPI class Json::Value _generateBlocksMetadataJson();

MCAPI class Json::Value _generateCameraMetadataJson(class CameraPresets const&);

MCAPI class Json::Value _generateCooldownCategoriesMetadataJson(class ItemRegistryRef);

MCAPI class Json::Value _generateDimensionsMetadataJson();

MCAPI class Json::Value _generateEffectsMetadataJson();

MCAPI class Json::Value _generateEnchantmentsMetadataJson();

MCAPI class Json::Value
_generateEntitiesMetadataJson(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);

MCAPI class Json::Value _generateItemsMetadataJson(class ItemRegistryRef);

MCAPI class Json::Value
_generateScriptingModuleMetadataJson(struct Scripting::ModuleBinding const&, struct Scripting::SupportedBindingModule const&, struct Scripting::ModuleBindingBundle const&);

MCAPI class Json::Value _generateStructureFeatureMetadataJson();

MCAPI std::unordered_map<std::string, std::string>
      _getPropertyToEntityNameMap(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);

MCAPI void generateBiomeDocumentation(class Core::Path const&, class BiomeRegistry const&);

MCAPI void generateBlocksDocumentation(class Core::Path const&);

MCAPI void generateCameraPresetDocumentation(class Core::Path const&, class CameraPresets const&);

MCAPI void generateCommandsDocumentation(class CommandRegistry& commandRegistry, class Core::Path const&);

MCAPI void generateCooldownCategoriesDocumentation(class Core::Path const&, class ItemRegistryRef);

MCAPI void
generateCreatorScriptingMetadata(class Scripting::ScriptEngine&, class Core::Path const&, class Core::Path const&, class Core::Path const&, class ItemRegistryRef, std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&, class CameraPresets const&, class BiomeRegistry const&);

MCAPI void generateDimensionsDocumentation(class Core::Path const&);

MCAPI void generateEffectsDocumentation(class Core::Path const&);

MCAPI void generateEnchantmentsDocumentation(class Core::Path const&);

MCAPI void
generateEntitiesDocumentation(class Core::Path const&, std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);

MCAPI void generateItemsDocumentation(class Core::Path const&, class ItemRegistryRef);

MCAPI void generateScriptingDocumentation(class Scripting::ScriptEngine& scriptEngine, class Core::Path const&);

MCAPI void generateStructureFeatureDocumentation(class Core::Path const&);

MCAPI std::string getGameSemVersionAsString();

MCAPI std::initializer_list<::AllExperiments> getRequiredExperimentsForMetadata();

MCAPI std::string scriptingVersionToString(struct Scripting::Version const&);

MCAPI bool writeJsonMetadataToFile(class Json::Value const& json, class Core::Path const& filepath);
// NOLINTEND

}; // namespace CreatorMetadataUtils
