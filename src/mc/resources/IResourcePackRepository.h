#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IResourcePackRepository {

public:
    // prevent constructor by default
    IResourcePackRepository& operator=(IResourcePackRepository const&) = delete;
    IResourcePackRepository(IResourcePackRepository const&)            = delete;
    IResourcePackRepository()                                          = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRESOURCEPACKREPOSITORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IResourcePackRepository();
#endif
    // NOLINTEND
};
