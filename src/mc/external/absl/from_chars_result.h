#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

struct from_chars_result {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk67c196;
    ::ll::UntypedStorage<4, 4> mUnk13d091;
    // NOLINTEND

public:
    // prevent constructor by default
    from_chars_result& operator=(from_chars_result const&);
    from_chars_result(from_chars_result const&);
    from_chars_result();
};

} // namespace absl
