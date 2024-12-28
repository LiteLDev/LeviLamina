#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IStoreCatalogRepository {
public:
    // prevent constructor by default
    IStoreCatalogRepository& operator=(IStoreCatalogRepository const&);
    IStoreCatalogRepository(IStoreCatalogRepository const&);
    IStoreCatalogRepository();
};
