#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JwsAlgorithm {

struct JoseCrypto {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke6f431;
    ::ll::UntypedStorage<8, 16> mUnk8cf8a3;
    ::ll::UntypedStorage<4, 4>  mUnk3817dd;
    ::ll::UntypedStorage<4, 4>  mUnk260980;
    // NOLINTEND

public:
    // prevent constructor by default
    JoseCrypto& operator=(JoseCrypto const&);
    JoseCrypto(JoseCrypto const&);
    JoseCrypto();
};

} // namespace JwsAlgorithm
