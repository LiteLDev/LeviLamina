#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalAuthentication {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk6bd560;
    ::ll::UntypedStorage<8, 8>  mUnkb92742;
    ::ll::UntypedStorage<8, 32> mUnk617bed;
    ::ll::UntypedStorage<8, 32> mUnke97702;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalAuthentication& operator=(LocalAuthentication const&);
    LocalAuthentication(LocalAuthentication const&);
    LocalAuthentication();
};
