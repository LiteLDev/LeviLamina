#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class Blob {
public:
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);
    Blob();
};

}; // namespace ClientBlobCache::Server
