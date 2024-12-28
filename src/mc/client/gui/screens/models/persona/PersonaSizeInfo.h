#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct PersonaSizeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk63471e;
    ::ll::UntypedStorage<8, 32> mUnk798864;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaSizeInfo& operator=(PersonaSizeInfo const&);
    PersonaSizeInfo(PersonaSizeInfo const&);
    PersonaSizeInfo();
};

} // namespace persona
