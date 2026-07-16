#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class crc32c_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7b835f;
    // NOLINTEND

public:
    // prevent constructor by default
    crc32c_t& operator=(crc32c_t const&);
    crc32c_t(crc32c_t const&);
    crc32c_t();
};

} // namespace absl
