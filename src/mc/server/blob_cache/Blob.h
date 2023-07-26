#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class Blob {

public:
    // prevent constructor by default
    Blob& operator=(Blob const&) = delete;
    Blob(Blob const&)            = delete;
    Blob()                       = delete;
};

}; // namespace ClientBlobCache::Server
