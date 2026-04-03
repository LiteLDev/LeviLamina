#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/BiomeFilterInclusion.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptBiomeFilterUtils {
// functions
// NOLINTBEGIN
MCAPI ::ScriptModuleMinecraft::ScriptBiomeFilterUtils::BiomeFilterInclusion filterIncludesBiome(
    ::Biome const&                              biome,
    ::BiomeRegistry const&                      registry,
    ::std::unordered_set<::Biome const*> const& includeBiomes,
    ::std::unordered_set<::Biome const*> const& excludeBiomes,
    ::std::vector<::std::string> const&         includeTags,
    ::std::vector<::std::string> const&         excludeTags,
    ::std::unordered_map<::Biome const*, ::ScriptModuleMinecraft::ScriptBiomeFilterUtils::BiomeFilterInclusion>&
        biomeInclusionCache
);

MCAPI ::std::optional<::Scripting::InvalidArgumentError> populateBiomes(
    ::BiomeRegistry const&                registry,
    ::std::vector<::std::string>          inBiomeNames,
    ::std::unordered_set<::Biome const*>& outBiomes
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptBiomeFilterUtils
