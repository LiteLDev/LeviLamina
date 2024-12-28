#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct SessionAuth {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4ed2ed;
    ::ll::UntypedStorage<8, 32> mUnk224eb8;
    ::ll::UntypedStorage<8, 24> mUnkcab015;
    ::ll::UntypedStorage<8, 32> mUnk9ea8a1;
    ::ll::UntypedStorage<8, 56> mUnk527ac2;
    ::ll::UntypedStorage<8, 56> mUnk762911;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionAuth& operator=(SessionAuth const&);
    SessionAuth(SessionAuth const&);
    SessionAuth();
};

} // namespace SDL
