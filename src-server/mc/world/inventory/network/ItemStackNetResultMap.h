#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"

class ItemStackNetResultMap {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string const& getItemStackNetResultName(::ItemStackNetResult result);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::ItemStackNetResult, ::std::string> const& mMap();
    // NOLINTEND
};
