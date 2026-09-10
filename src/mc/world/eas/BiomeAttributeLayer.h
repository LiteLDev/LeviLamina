#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class BiomeAttributeLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb82074;
    ::ll::UntypedStorage<4, 4>  mUnk437d8c;
    ::ll::UntypedStorage<4, 4>  mUnkc1a132;
    ::ll::UntypedStorage<8, 24> mUnkda9c78;
    ::ll::UntypedStorage<1, 1>  mUnka089ee;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeAttributeLayer& operator=(BiomeAttributeLayer const&);
    BiomeAttributeLayer(BiomeAttributeLayer const&);
    BiomeAttributeLayer();
};

} // namespace EAS
