#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivationUri {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5b6d24;
    ::ll::UntypedStorage<8, 64> mUnkfa4f30;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivationUri& operator=(ActivationUri const&);
    ActivationUri(ActivationUri const&);
    ActivationUri();
};
