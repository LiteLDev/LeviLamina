#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class VerticalAnchor; }
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class UniformHeight {
public:
    // prevent constructor by default
    UniformHeight& operator=(UniformHeight const&);
    UniformHeight(UniformHeight const&);
    UniformHeight();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UniformHeight@worldgen@br@@UEAA@XZ
    virtual ~UniformHeight() = default;

    // vIndex: 1, symbol: ?sample@UniformHeight@worldgen@br@@UEBAHAEAVIRandom@@AEBVWorldGenContext@23@@Z
    virtual int sample(class IRandom&, class br::worldgen::WorldGenContext const&) const;

    // symbol:
    // ?toString@UniformHeight@worldgen@br@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ?of@UniformHeight@worldgen@br@@SA?AV123@VVerticalAnchor@23@0@Z
    MCAPI static class br::worldgen::UniformHeight
        of(class br::worldgen::VerticalAnchor, class br::worldgen::VerticalAnchor);

    // NOLINTEND
};

}; // namespace br::worldgen
