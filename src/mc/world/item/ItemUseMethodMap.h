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
    // symbol:
    // ?getItemUseMethodName@ItemUseMethodMap@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemUseMethod@@@Z
    MCAPI static std::string const& getItemUseMethodName(::ItemUseMethod);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mMap@ItemUseMethodMap@@0V?$BidirectionalUnorderedMap@W4ItemUseMethod@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ItemUseMethod, std::string> const mMap;

    // NOLINTEND
};
