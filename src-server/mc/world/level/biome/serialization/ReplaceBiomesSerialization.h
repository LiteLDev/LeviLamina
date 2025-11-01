#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
struct BiomeReplacementsData;
struct BiomeStringList;
struct ReplaceBiomesComponent;
// clang-format on

namespace ReplaceBiomesSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedReplaceBiomesData(
    ::BiomeReplacementsData const& data,
    ::ReplaceBiomesComponent&      component,
    ::BiomeRegistry const&         biomeRegistry,
    ::BiomeStringList const&       stringList
);

MCAPI void serializeReplaceBiomesData(
    ::ReplaceBiomesComponent const& component,
    ::BiomeReplacementsData&        data,
    ::BiomeStringList&              stringList
);
// NOLINTEND

} // namespace ReplaceBiomesSerialization
