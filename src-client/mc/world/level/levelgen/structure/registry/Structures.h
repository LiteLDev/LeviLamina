#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct IWorldRegistriesProvider;
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace br::worldgen { class StructureRegistry; }
// clang-format on

namespace br::worldgen {

struct Structures {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bootstrap(
        ::br::worldgen::StructureRegistry& context,
        ::BaseGameVersion const&,
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const* jigsawDefinitions,
        ::IWorldRegistriesProvider&                                                        registries
    );
    // NOLINTEND
};

} // namespace br::worldgen
