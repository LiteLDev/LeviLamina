#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct DeserializeParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 4608> mUnk62ae08;
    ::ll::UntypedStorage<1, 16>   mUnk676625;
    ::ll::UntypedStorage<8, 8>    mUnk7c56f3;
    ::ll::UntypedStorage<8, 8>    mUnk4c3090;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeParameters& operator=(DeserializeParameters const&);
    DeserializeParameters(DeserializeParameters const&);
    DeserializeParameters();
};

} // namespace RakNet
