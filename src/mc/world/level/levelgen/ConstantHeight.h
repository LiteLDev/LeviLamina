#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class VerticalAnchor; }
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class ConstantHeight {
public:
    // prevent constructor by default
    ConstantHeight& operator=(ConstantHeight const&);
    ConstantHeight(ConstantHeight const&);
    ConstantHeight();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ConstantHeight@worldgen@br@@UEAA@XZ
    virtual ~ConstantHeight() = default;

    // vIndex: 1, symbol: ?sample@ConstantHeight@worldgen@br@@UEBAHAEAVIRandom@@AEBVWorldGenContext@23@@Z
    virtual int sample(class IRandom&, class br::worldgen::WorldGenContext const&) const;

    // symbol: ?of@ConstantHeight@worldgen@br@@SA?AV123@VVerticalAnchor@23@@Z
    MCAPI static class br::worldgen::ConstantHeight of(class br::worldgen::VerticalAnchor);

    // NOLINTEND
};

}; // namespace br::worldgen
