#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/item/ItemAcquisitionMethod.h"

class ItemAcquisitionMethodMap {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& getItemAcquisitionMethodName(::ItemAcquisitionMethod acquisitionMethod);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ItemAcquisitionMethod, ::std::string> const& mMap();
    // NOLINTEND
};
