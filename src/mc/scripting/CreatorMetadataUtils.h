#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class BiomeRegistry;
class CameraPresets;
class CommandRegistry;
class ItemRegistryRef;
struct JSONSchemaProperty;
namespace Core { class Path; }
namespace CreatorMetadataUtils { struct ServerMetadataOutputPaths; }
namespace Json { class Value; }
namespace Scripting { class ScriptEngine; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
// clang-format on

namespace CreatorMetadataUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI ::Json::Value CreateDefaultTypeJson();

MCAPI ::Json::Value MetaAnyToJSON(::entt::meta_any value);

MCAPI ::std::optional<::Json::Value> MetaClassTypeToJSON(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                type,
    ::Scripting::ModuleBindingBundle const& loadedModules
);

MCAPI ::Json::Value MetaTypeToJSON(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                type,
    ::Scripting::ModuleBindingBundle const& loadedModules,
    ::std::string const&                    bindingName
);

MCAPI void _addCommonEngineMetadata(::Json::Value& root, char const* type);

MCAPI void _addCommonVanillaMetadata(::Json::Value& jsonRoot, char const* type);

MCAPI void _addPrivilegeToArray(::Json::Value& arr, ::Scripting::Privilege privilege);

MCAPI ::Core::Path _buildSchemaOutputPath(::Core::Path const& baseFolder, ::JSONSchemaProperty const& property);

MCAPI ::Json::Value _generateScriptingModuleMetadataJson(
    ::Scripting::ModuleBinding const&          moduleToBind,
    ::Scripting::SupportedBindingModule const& moduleDescriptor,
    ::Scripting::ModuleBindingBundle const&    loadedModules
);

MCAPI ::std::optional<::Scripting::Privilege> _tryGetPrivilegeTypeOfClosureTemplateType(::entt::meta_type const& type);

MCAPI void generateCommandsDocumentation(::CommandRegistry& commandRegistry, ::Core::Path const& docsFolder);

MCAPI ::Json::Value generateConstantDocumentation(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::Scripting::ConstantFactory const&     constantBinding,
    ::Scripting::ModuleBindingBundle const& loadedModules
);

MCAPI void generateCreatorScriptingMetadata(
    ::Scripting::ScriptEngine&                                                       scriptEngine,
    ::CreatorMetadataUtils::ServerMetadataOutputPaths const&                         outputPaths,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCAPI ::Json::Value generateFunctionDocumentation(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::Scripting::FunctionBinding const&     functionBinding,
    bool                                    isConstructor,
    ::Scripting::ModuleBindingBundle const& loadedModules
);

MCAPI ::Json::Value generateModuleDependencyJson(::Scripting::ModuleDependency const& dependency);

MCAPI ::Json::Value generateModuleDescriptionJson(::Scripting::ModuleDescriptor const& descriptor);

MCAPI void generateMolangQueriesDocumentation(::Core::Path const& docsFolder);

MCAPI ::Json::Value generatePropertiesDocumentation(
    ::Scripting::ModuleBinding const&                  moduleToBind,
    ::std::vector<::Scripting::PropertyBinding> const& properties,
    ::Scripting::ModuleBindingBundle const&            loadedModules,
    bool                                               checkPrivilege,
    bool                                               checkReadOnly,
    bool                                               allowSettableProperties
);

MCAPI void generateVanillaDataDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::ItemRegistryRef const                                                          itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCAPI ::CreatorMetadataUtils::ServerMetadataOutputPaths getAndCleanServerMetadataPaths();
#endif

MCAPI ::std::string getGameSemVersionAsString();

#ifdef LL_PLAT_S
MCAPI ::std::string scriptingVersionToString(::Scripting::Version const& version);

MCAPI void sortJsonElementsByName(::Json::Value& jsonArray, bool const removeDuplicates);

MCAPI bool validateVariantResolution(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                variantType,
    ::Scripting::ModuleBindingBundle const& loadedModules,
    ::std::string const&                    bindingName
);

MCAPI bool writeJsonMetadataToFile(::Json::Value const& json, ::Core::Path const& filepath);
#endif
// NOLINTEND

} // namespace CreatorMetadataUtils
