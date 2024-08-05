#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class ConstantHeight; }
namespace br::worldgen { class UniformHeight; }
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class StructureHeightProvider {
public:
    // prevent constructor by default
    StructureHeightProvider& operator=(StructureHeightProvider const&);
    StructureHeightProvider(StructureHeightProvider const&);
    StructureHeightProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureHeightProvider();

    // vIndex: 1
    virtual int sample(class IRandom&, class br::worldgen::WorldGenContext const&) const;

    MCAPI explicit StructureHeightProvider(class br::worldgen::ConstantHeight);

    MCAPI StructureHeightProvider(class br::worldgen::StructureHeightProvider&&);

    MCAPI explicit StructureHeightProvider(class br::worldgen::UniformHeight);

    // NOLINTEND
};

}; // namespace br::worldgen
