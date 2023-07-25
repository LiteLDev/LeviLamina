#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class shared_ptr_cache {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_SHARED_PTR_CACHE
public:
    shared_ptr_cache& operator=(shared_ptr_cache const&) = delete;
    shared_ptr_cache(shared_ptr_cache const&)            = delete;
    shared_ptr_cache()                                   = delete;
#endif

public:
    /**
     * @symbol ?remove\@shared_ptr_cache\@httpclient\@xbox\@\@SAXPEAX\@Z
     */
    MCAPI static void remove(void*);
};

}; // namespace xbox::httpclient
