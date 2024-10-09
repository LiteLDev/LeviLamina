#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"

class ItemStackNetResultMap {
public:
    // prevent constructor by default
    ItemStackNetResultMap& operator=(ItemStackNetResultMap const&);
    ItemStackNetResultMap(ItemStackNetResultMap const&);
    ItemStackNetResultMap();

public:
    // NOLINTBEGIN
    MCAPI static std::string const& getItemStackNetResultName(::ItemStackNetResult result);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ItemStackNetResult, std::string> const mMap;

    // NOLINTEND
};
