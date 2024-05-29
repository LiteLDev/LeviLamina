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
    // symbol:
    // ?getItemStackNetResultName@ItemStackNetResultMap@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemStackNetResult@@@Z
    MCAPI static std::string const& getItemStackNetResultName(::ItemStackNetResult);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mMap@ItemStackNetResultMap@@0V?$BidirectionalUnorderedMap@W4ItemStackNetResult@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ItemStackNetResult, std::string> const mMap;

    // NOLINTEND
};
