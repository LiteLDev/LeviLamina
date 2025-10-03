#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class RouterLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk16e864;
    ::ll::UntypedStorage<8, 32> mUnk8b4e15;
    ::ll::UntypedStorage<8, 32> mUnkba351f;
    ::ll::UntypedStorage<8, 32> mUnk36cc3c;
    ::ll::UntypedStorage<8, 32> mUnk70fbdd;
    ::ll::UntypedStorage<1, 4>  mUnkfdb973;
    ::ll::UntypedStorage<1, 4>  mUnk7e4ce0;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterLocation& operator=(RouterLocation const&);
    RouterLocation(RouterLocation const&);
    RouterLocation();
};

} // namespace OreUI
