#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreCatalogItem {
public:
    // prevent constructor by default
    StoreCatalogItem& operator=(StoreCatalogItem const&);
    StoreCatalogItem(StoreCatalogItem const&);
    StoreCatalogItem();
};
