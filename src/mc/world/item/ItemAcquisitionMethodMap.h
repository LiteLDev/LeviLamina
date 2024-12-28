#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/item/ItemAcquisitionMethod.h"

class ItemAcquisitionMethodMap {
public:
    // prevent constructor by default
    ItemAcquisitionMethodMap& operator=(ItemAcquisitionMethodMap const&);
    ItemAcquisitionMethodMap(ItemAcquisitionMethodMap const&);
    ItemAcquisitionMethodMap();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ItemAcquisitionMethod, ::std::string> const& mMap();
    // NOLINTEND
};
