#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_110 { struct BiomeJsonDocument; }
// clang-format on

namespace BiomeLegacyUpgrader {
// functions
// NOLINTBEGIN
MCNAPI ::SharedTypes::v1_21_120::BiomeJsonDocument::BiomeJsonObject
upgradeBiomeLegacy(::SharedTypes::v1_21_110::BiomeJsonDocument oldDocument);
// NOLINTEND

} // namespace BiomeLegacyUpgrader
