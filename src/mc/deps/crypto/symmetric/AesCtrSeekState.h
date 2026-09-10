#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class AesCtrSeekState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1d78ca;
    ::ll::UntypedStorage<8, 8>  mUnk454397;
    // NOLINTEND

public:
    // prevent constructor by default
    AesCtrSeekState& operator=(AesCtrSeekState const&);
    AesCtrSeekState(AesCtrSeekState const&);
    AesCtrSeekState();
};

} // namespace Crypto::Symmetric
