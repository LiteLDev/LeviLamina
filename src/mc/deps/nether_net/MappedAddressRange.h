#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct MappedAddressRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2c501a;
    ::ll::UntypedStorage<2, 2>  mUnk3ddbaf;
    ::ll::UntypedStorage<2, 2>  mUnk92d2bd;
    ::ll::UntypedStorage<8, 40> mUnk26d101;
    ::ll::UntypedStorage<4, 4>  mUnk869426;
    // NOLINTEND

public:
    // prevent constructor by default
    MappedAddressRange& operator=(MappedAddressRange const&);
    MappedAddressRange(MappedAddressRange const&);
    MappedAddressRange();
};

} // namespace NetherNet
