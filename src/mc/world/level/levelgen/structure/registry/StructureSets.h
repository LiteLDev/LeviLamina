#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

namespace br::worldgen {

struct StructureSets {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bootstrap(
        ::br::worldgen::StructureRegistry const&                                    structures,
        ::br::worldgen::StructureSetRegistry&                                       context,
        ::BaseGameVersion const&                                                    baseGameVersion,
        ::Experiments const&                                                        experiments,
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Contents> const* structureSetsData
    );
    // NOLINTEND
};

} // namespace br::worldgen
