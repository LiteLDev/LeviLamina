#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

struct VoidExtentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk6f1340;
    ::ll::UntypedStorage<2, 2> mUnk8b4e5e;
    ::ll::UntypedStorage<2, 2> mUnk3f4761;
    ::ll::UntypedStorage<2, 2> mUnkc2b51a;
    ::ll::UntypedStorage<2, 8> mUnk25c66e;
    // NOLINTEND

public:
    // prevent constructor by default
    VoidExtentData& operator=(VoidExtentData const&);
    VoidExtentData(VoidExtentData const&);
    VoidExtentData();
};

} // namespace astc_codec
