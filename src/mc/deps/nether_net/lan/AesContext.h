#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class AesContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk967e22;
    ::ll::UntypedStorage<8, 24> mUnk6fda12;
    ::ll::UntypedStorage<8, 24> mUnk147ca6;
    // NOLINTEND

public:
    // prevent constructor by default
    AesContext& operator=(AesContext const&);
    AesContext(AesContext const&);
    AesContext();
};

} // namespace NetherNet
