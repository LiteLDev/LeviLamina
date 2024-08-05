#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/components/ItemStackNetResult.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/item/components/ItemStackNetResult.h"

class ItemStackNetResultMap {
public:
    // prevent constructor by default
    ItemStackNetResultMap& operator=(ItemStackNetResultMap const&);
    ItemStackNetResultMap(ItemStackNetResultMap const&);
    ItemStackNetResultMap();

public:
    // NOLINTBEGIN
    MCAPI static std::string const& getItemStackNetResultName(::ItemStackNetResult);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ItemStackNetResult, std::string> const mMap;

    // NOLINTEND
};
