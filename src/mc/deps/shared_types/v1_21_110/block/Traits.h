#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Traits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk20de38;
    ::ll::UntypedStorage<8, 24> mUnkc357c9;
    // NOLINTEND

public:
    // prevent constructor by default
    Traits& operator=(Traits const&);
    Traits(Traits const&);
    Traits();
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
