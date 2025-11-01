#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class Blob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd22e9f;
    ::ll::UntypedStorage<8, 32> mUnk672641;
    ::ll::UntypedStorage<1, 1>  mUnk7a29d3;
    // NOLINTEND

public:
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);
    Blob();
};

} // namespace ClientBlobCache::Server
