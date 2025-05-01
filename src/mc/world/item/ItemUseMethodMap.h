#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/item/ItemUseMethod.h"

class ItemUseMethodMap {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string const& getItemUseMethodName(::ItemUseMethod useMethod);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ItemUseMethod, ::std::string> const& mMap();
    // NOLINTEND
};
