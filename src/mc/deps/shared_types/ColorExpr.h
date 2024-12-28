#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct ColorExpr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk4cf2eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorExpr& operator=(ColorExpr const&);
    ColorExpr(ColorExpr const&);
    ColorExpr();
};

} // namespace SharedTypes::v1_21
