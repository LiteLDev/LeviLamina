#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicClientEntityFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3d204a;
    ::ll::UntypedStorage<8, 8>  mUnkf424a0;
    ::ll::UntypedStorage<8, 8>  mUnk86e221;
    ::ll::UntypedStorage<8, 64> mUnkeb905f;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityFactory& operator=(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory();
};
