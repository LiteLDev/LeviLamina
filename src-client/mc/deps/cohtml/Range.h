#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

struct Range {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk837a74;
    ::ll::UntypedStorage<4, 4> mUnk30cf0d;
    // NOLINTEND

public:
    // prevent constructor by default
    Range& operator=(Range const&);
    Range(Range const&);
    Range();
};

} // namespace cohtml::TextInput
