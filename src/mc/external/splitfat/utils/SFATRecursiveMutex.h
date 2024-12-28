#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class SFATRecursiveMutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk864933;
    ::ll::UntypedStorage<4, 4>  mUnk349949;
    ::ll::UntypedStorage<4, 4>  mUnkf80c5a;
    // NOLINTEND

public:
    // prevent constructor by default
    SFATRecursiveMutex& operator=(SFATRecursiveMutex const&);
    SFATRecursiveMutex(SFATRecursiveMutex const&);
    SFATRecursiveMutex();
};

} // namespace SFAT
