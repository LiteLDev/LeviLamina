#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class int128 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke71cf1;
    ::ll::UntypedStorage<8, 8> mUnka84de6;
    // NOLINTEND

public:
    // prevent constructor by default
    int128& operator=(int128 const&);
    int128(int128 const&);
    int128();
};

} // namespace absl
