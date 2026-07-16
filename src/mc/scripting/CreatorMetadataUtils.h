#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class BiomeRegistry;
class CameraPresets;
class CommandRegistry;
class ItemRegistryRef;
namespace Core { class Path; }
namespace CreatorMetadataUtils { struct ServerMetadataOutputPaths; }
namespace Scripting { class ScriptEngine; }
// clang-format on

namespace CreatorMetadataUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI void generateCommandsDocumentation(::CommandRegistry& commandRegistry, ::Core::Path const& docsFolder);

MCAPI void generateCreatorScriptingMetadata(
    ::Scripting::ScriptEngine&                                                       scriptEngine,
    ::CreatorMetadataUtils::ServerMetadataOutputPaths const&                         outputPaths,
    ::ItemRegistryRef                                                                itemRegistry,
    ::std::unordered_map<::std::string, ::std::unique_ptr<::ActorDefinition>> const& actorDefinitionList,
    ::CameraPresets const&                                                           presets,
    ::BiomeRegistry const&                                                           biomes
);

MCAPI void generateMolangQueriesDocumentation(::Core::Path const& docsFolder);

MCAPI ::CreatorMetadataUtils::ServerMetadataOutputPaths getAndCleanServerMetadataPaths();
#endif

MCAPI ::std::string getGameSemVersionAsString();
// NOLINTEND

} // namespace CreatorMetadataUtils
