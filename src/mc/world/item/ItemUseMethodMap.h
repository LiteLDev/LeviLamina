#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ItemUseMethodMap {
public:
    // prevent constructor by default
    ItemUseMethodMap& operator=(ItemUseMethodMap const&);
    ItemUseMethodMap(ItemUseMethodMap const&);
    ItemUseMethodMap();

public:
    // NOLINTBEGIN
    MCAPI static std::string const& getItemUseMethodName(::ItemUseMethod);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ItemUseMethod, std::string> const mMap;

    // NOLINTEND
};
