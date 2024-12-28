#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/SearchQuery.h"

class StoreSearchQuery : public ::SearchQuery {
public:
    // StoreSearchQuery inner types define
    enum class Flag : uint {
        // bitfield representation
        None                              = 0,
        FetchKeyartImage                  = 1u << 0,
        FetchThumbnailImage               = 1u << 1,
        FetchKeyartImageForFirstOfferOnly = 1u << 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk19df94;
    ::ll::UntypedStorage<4, 4>  mUnk50cddc;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreSearchQuery& operator=(StoreSearchQuery const&);
    StoreSearchQuery(StoreSearchQuery const&);
    StoreSearchQuery();
};
