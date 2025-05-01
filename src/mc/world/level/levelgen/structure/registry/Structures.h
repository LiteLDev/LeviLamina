#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class IWorldRegistriesProvider;
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

struct Structures {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bootstrap(::br::worldgen::StructureRegistry& context, ::BaseGameVersion const& experiments, ::Experiments const& jigsawDefinitions, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const* registries, ::IWorldRegistriesProvider&);

    MCNAPI static ::std::shared_ptr<::br::worldgen::JigsawStructure> makeTrailRuinsJigsaw();
    // NOLINTEND
};

} // namespace br::worldgen
