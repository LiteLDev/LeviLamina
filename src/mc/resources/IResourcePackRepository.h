#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IResourcePackRepository {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRESOURCEPACKREPOSITORY
public:
    IResourcePackRepository& operator=(IResourcePackRepository const&) = delete;
    IResourcePackRepository(IResourcePackRepository const&)            = delete;
    IResourcePackRepository()                                          = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRESOURCEPACKREPOSITORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IResourcePackRepository();
#endif
};
