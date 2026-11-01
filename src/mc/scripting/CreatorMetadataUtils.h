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
MCNAPI ::Json::Value CreateDefaultTypeJson();

MCNAPI ::Json::Value MetaAnyToJSON(::entt::meta_any value);

MCNAPI ::std::optional<::Json::Value> MetaClassTypeToJSON(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                type,
    ::Scripting::ModuleBindingBundle const& loadedModules
);

MCNAPI ::Json::Value MetaTypeToJSON(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                type,
    ::Scripting::ModuleBindingBundle const& loadedModules,
    ::std::string const&                    bindingName
);

MCNAPI void _addCommonEngineMetadata(::Json::Value& root, char const* type);

MCNAPI void _addCommonVanillaMetadata(::Json::Value& jsonRoot, char const* type);

MCNAPI void _addPrivilegeToArray(::Json::Value& arr, ::Scripting::Privilege privilege);

MCNAPI ::Json::Value _generateScriptingModuleMetadataJson(
    ::Scripting::ModuleBinding const&          moduleToBind,
    ::Scripting::SupportedBindingModule const& moduleDescriptor,
    ::Scripting::ModuleBindingBundle const&    loadedModules
);

MCNAPI ::std::optional<::Scripting::Privilege> _tryGetPrivilegeTypeOfClosureTemplateType(::entt::meta_type const& type);

MCNAPI void generateCommandsDocumentation(::CommandRegistry& commandRegistry, ::Core::Path const& docsFolder);

MCNAPI ::Json::Value generateConstantDocumentation(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::Scripting::ConstantFactory const&     constantBinding,
    ::Scripting::ModuleBindingBundle const& loadedModules
);

MCNAPI void generateCreatorScriptingMetadata(
    ::Scripting::ScriptEngine&                                                       scriptEngine,
    ::CreatorMetadataUtils::ServerMetadataOutputPaths const&                         outputPaths,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCNAPI ::Json::Value generateFunctionDocumentation(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::Scripting::FunctionBinding const&     functionBinding,
    bool                                    isConstructor,
    ::Scripting::ModuleBindingBundle const& loadedModules
);

MCNAPI ::Json::Value generateModuleDependencyJson(::Scripting::ModuleDependency const& dependency);

MCNAPI ::Json::Value generateModuleDescriptionJson(::Scripting::ModuleDescriptor const& descriptor);

MCNAPI void generateMolangQueriesDocumentation(::Core::Path const& docsFolder);

MCNAPI ::Json::Value generatePropertiesDocumentation(
    ::Scripting::ModuleBinding const&                  moduleToBind,
    ::std::vector<::Scripting::PropertyBinding> const& properties,
    ::Scripting::ModuleBindingBundle const&            loadedModules,
    bool                                               checkPrivilege,
    bool                                               checkReadOnly,
    bool                                               allowSettableProperties
);

MCNAPI void generateVanillaDataDocumentation(
    ::Core::Path const&                                                              docsFolder,
    ::ItemRegistryRef const                                                          itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCNAPI ::CreatorMetadataUtils::ServerMetadataOutputPaths getAndCleanServerMetadataPaths();

MCNAPI ::std::string getGameSemVersionAsString();
#endif

MCNAPI ::CreatorMetadataUtils::ServerMetadataOutputPaths getServerMetadataPaths();

#ifdef LL_PLAT_S
MCNAPI ::std::string scriptingVersionToString(::Scripting::Version const& version);

MCNAPI void sortJsonElementsByName(::Json::Value& jsonArray, bool const removeDuplicates);

MCNAPI bool validateVariantResolution(
    ::Scripting::ModuleBinding const&       moduleToBind,
    ::entt::meta_type const&                variantType,
    ::Scripting::ModuleBindingBundle const& loadedModules,
    ::std::string const&                    bindingName
);

MCNAPI bool writeJsonMetadataToFile(::Json::Value const& json, ::Core::Path const& filepath);
#endif
// NOLINTEND

} // namespace CreatorMetadataUtils
