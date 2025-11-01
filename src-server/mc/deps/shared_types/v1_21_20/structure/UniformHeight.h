#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct UniformHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 4> mUnkfda7b8;
    ::ll::UntypedStorage<2, 4> mUnkde71a1;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformHeight& operator=(UniformHeight const&);
    UniformHeight(UniformHeight const&);
    UniformHeight();

};

}
