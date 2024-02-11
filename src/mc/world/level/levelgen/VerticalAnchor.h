#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class VerticalAnchor {
public:
    // prevent constructor by default
    VerticalAnchor& operator=(VerticalAnchor const&);
    VerticalAnchor(VerticalAnchor const&);
    VerticalAnchor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?toString@VerticalAnchor@worldgen@br@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ?absolute@VerticalAnchor@worldgen@br@@SA?AV123@H@Z
    MCAPI static class br::worldgen::VerticalAnchor absolute(int);

    // NOLINTEND
};

}; // namespace br::worldgen
