#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/item/components/ItemAcquisitionMethod.h"

class ItemAcquisitionMethodMap {
public:
    // prevent constructor by default
    ItemAcquisitionMethodMap& operator=(ItemAcquisitionMethodMap const&);
    ItemAcquisitionMethodMap(ItemAcquisitionMethodMap const&);
    ItemAcquisitionMethodMap();

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mMap@ItemAcquisitionMethodMap@@0V?$BidirectionalUnorderedMap@W4ItemAcquisitionMethod@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ItemAcquisitionMethod, std::string> const mMap;

    // NOLINTEND
};
