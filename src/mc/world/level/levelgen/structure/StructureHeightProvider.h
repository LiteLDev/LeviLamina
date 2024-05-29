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
    // vIndex: 0, symbol: ??1StructureHeightProvider@worldgen@br@@UEAA@XZ
    virtual ~StructureHeightProvider();

    // vIndex: 1, symbol: ?sample@StructureHeightProvider@worldgen@br@@UEBAHAEAVIRandom@@AEBVWorldGenContext@23@@Z
    virtual int sample(class IRandom&, class br::worldgen::WorldGenContext const&) const;

    // symbol: ??0StructureHeightProvider@worldgen@br@@QEAA@VConstantHeight@12@@Z
    MCAPI explicit StructureHeightProvider(class br::worldgen::ConstantHeight);

    // symbol: ??0StructureHeightProvider@worldgen@br@@QEAA@$$QEAV012@@Z
    MCAPI StructureHeightProvider(class br::worldgen::StructureHeightProvider&&);

    // symbol: ??0StructureHeightProvider@worldgen@br@@QEAA@VUniformHeight@12@@Z
    MCAPI explicit StructureHeightProvider(class br::worldgen::UniformHeight);

    // NOLINTEND
};

}; // namespace br::worldgen
