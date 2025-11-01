#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RefCountedBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbbd214;
    // NOLINTEND

public:
    // prevent constructor by default
    RefCountedBase& operator=(RefCountedBase const&);
    RefCountedBase(RefCountedBase const&);
    RefCountedBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RefCountedBase() = default;
    // NOLINTEND

};

}
