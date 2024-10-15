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
    virtual int sample(class IRandom& randomSource, class br::worldgen::WorldGenContext const& heightAccessor) const;

    MCAPI explicit StructureHeightProvider(class br::worldgen::ConstantHeight provider);

    MCAPI StructureHeightProvider(class br::worldgen::StructureHeightProvider&& other);

    MCAPI explicit StructureHeightProvider(class br::worldgen::UniformHeight provider);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class br::worldgen::UniformHeight provider);

    MCAPI void* ctor$(class br::worldgen::StructureHeightProvider&& other);

    MCAPI void* ctor$(class br::worldgen::ConstantHeight provider);

    MCAPI void dtor$();

    MCAPI int sample$(class IRandom& randomSource, class br::worldgen::WorldGenContext const& heightAccessor) const;

    // NOLINTEND
};

}; // namespace br::worldgen
