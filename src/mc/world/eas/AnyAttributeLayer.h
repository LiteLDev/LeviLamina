#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class AnyAttributeLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk125b10;
    // NOLINTEND

public:
    // prevent constructor by default
    AnyAttributeLayer& operator=(AnyAttributeLayer const&);
    AnyAttributeLayer(AnyAttributeLayer const&);
    AnyAttributeLayer();
};

} // namespace EAS
