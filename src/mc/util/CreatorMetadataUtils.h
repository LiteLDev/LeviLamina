#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { enum class Privilege; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
// clang-format on

namespace CreatorMetadataUtils {
// NOLINTBEGIN
/**
 * @symbol ?_addCommonVanillaMetadata\@CreatorMetadataUtils\@\@YAXAEAVValue\@Json\@\@PEBD\@Z
 */
MCAPI void _addCommonVanillaMetadata(class Json::Value&, char const*);
/**
 * @symbol ?_addOptionalPrivilegeName\@CreatorMetadataUtils\@\@YAXAEAVValue\@Json\@\@W4Privilege\@Scripting\@\@\@Z
 */
MCAPI void _addOptionalPrivilegeName(class Json::Value&, enum class Scripting::Privilege);
/**
 * @symbol ?_generateBlocksMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@XZ
 */
MCAPI class Json::Value _generateBlocksMetadataJson();
/**
 * @symbol ?_generateDimensionsMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@XZ
 */
MCAPI class Json::Value _generateDimensionsMetadataJson();
/**
 * @symbol ?_generateEffectsMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@XZ
 */
MCAPI class Json::Value _generateEffectsMetadataJson();
/**
 * @symbol ?_generateEnchantmentsMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@XZ
 */
MCAPI class Json::Value _generateEnchantmentsMetadataJson();
/**
 * @symbol
 * ?_generateEntitiesMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
 */
MCAPI class Json::Value
_generateEntitiesMetadataJson(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);
/**
 * @symbol ?_generateItemsMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@VItemRegistryRef\@\@\@Z
 */
MCAPI class Json::Value _generateItemsMetadataJson(class ItemRegistryRef);
/**
 * @symbol
 * ?_generateScriptingModuleMetadataJson\@CreatorMetadataUtils\@\@YA?AVValue\@Json\@\@AEBUModuleBinding\@Scripting\@\@AEBUSupportedBindingModule\@5\@AEBUModuleBindingBundle\@5\@\@Z
 */
MCAPI class Json::Value
_generateScriptingModuleMetadataJson(struct Scripting::ModuleBinding const&, struct Scripting::SupportedBindingModule const&, struct Scripting::ModuleBindingBundle const&);
/**
 * @symbol
 * ?_getDimensionStringNames\@CreatorMetadataUtils\@\@YA?AV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
 */
MCAPI std::unordered_map<std::string, std::string> _getDimensionStringNames();
/**
 * @symbol
 * ?_getPropertyToEntityNameMap\@CreatorMetadataUtils\@\@YA?AV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI std::unordered_map<std::string, std::string>
      _getPropertyToEntityNameMap(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);
/**
 * @symbol
 * ?_getPropertyToItemNameMap\@CreatorMetadataUtils\@\@YA?AV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$tuple\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$tuple\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@2\@\@std\@\@\@2\@\@std\@\@VItemRegistryRef\@\@\@Z
 */
MCAPI std::unordered_map<std::string, std::tuple<std::string, bool>> _getPropertyToItemNameMap(class ItemRegistryRef);
/**
 * @symbol ?generateBlocksDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@\@Z
 */
MCAPI void generateBlocksDocumentation(class Core::Path const&);
/**
 * @symbol ?generateCommandsDocumentation\@CreatorMetadataUtils\@\@YAXAEAVCommandRegistry\@\@AEBVPath\@Core\@\@\@Z
 */
MCAPI void generateCommandsDocumentation(class CommandRegistry&, class Core::Path const&);
/**
 * @symbol ?generateDimensionsDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@\@Z
 */
MCAPI void generateDimensionsDocumentation(class Core::Path const&);
/**
 * @symbol ?generateEffectsDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@\@Z
 */
MCAPI void generateEffectsDocumentation(class Core::Path const&);
/**
 * @symbol ?generateEnchantmentsDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@\@Z
 */
MCAPI void generateEnchantmentsDocumentation(class Core::Path const&);
/**
 * @symbol
 * ?generateEntitiesDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
 */
MCAPI void
generateEntitiesDocumentation(class Core::Path const&, std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);
/**
 * @symbol ?generateItemsDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@VItemRegistryRef\@\@\@Z
 */
MCAPI void generateItemsDocumentation(class Core::Path const&, class ItemRegistryRef);
/**
 * @symbol
 * ?generateScriptingDocumentation\@CreatorMetadataUtils\@\@YAXAEAVScriptEngine\@Scripting\@\@AEBVPath\@Core\@\@\@Z
 */
MCAPI void generateScriptingDocumentation(class Scripting::ScriptEngine&, class Core::Path const&);
/**
 * @symbol
 * ?generateVanillaDataDocumentation\@CreatorMetadataUtils\@\@YAXAEBVPath\@Core\@\@VItemRegistryRef\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
 */
MCAPI void
generateVanillaDataDocumentation(class Core::Path const&, class ItemRegistryRef, std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);
/**
 * @symbol
 * ?getGameSemVersionAsString\@CreatorMetadataUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string getGameSemVersionAsString();
/**
 * @symbol
 * ?getRequiredExperimentsForMetadata\@CreatorMetadataUtils\@\@YA?AV?$initializer_list\@W4AllExperiments\@\@\@std\@\@XZ
 */
MCAPI std::initializer_list<enum class AllExperiments> getRequiredExperimentsForMetadata();
/**
 * @symbol
 * ?scriptingVersionToString\@CreatorMetadataUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUVersion\@Scripting\@\@\@Z
 */
MCAPI std::string scriptingVersionToString(struct Scripting::Version const&);
/**
 * @symbol ?writeJsonMetadataToFile\@CreatorMetadataUtils\@\@YA_NAEBVValue\@Json\@\@AEBVPath\@Core\@\@\@Z
 */
MCAPI bool writeJsonMetadataToFile(class Json::Value const&, class Core::Path const&);
// NOLINTEND

}; // namespace CreatorMetadataUtils
