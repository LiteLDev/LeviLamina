#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class Blob {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBLOBCACHE_SERVER_BLOB
public:
    Blob& operator=(Blob const&) = delete;
    Blob(Blob const&)            = delete;
    Blob()                       = delete;
#endif

public:
};

}; // namespace ClientBlobCache::Server
