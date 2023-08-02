#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/components/ItemStackNetResult.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class ItemStackNetResultMap {

public:
    // prevent constructor by default
    ItemStackNetResultMap& operator=(ItemStackNetResultMap const&) = delete;
    ItemStackNetResultMap(ItemStackNetResultMap const&)            = delete;
    ItemStackNetResultMap()                                        = delete;

   static inline BidirectionalUnorderedMap<enum class ItemStackNetResult, std::string> const& getMap() {
        return mMap;
    }

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getItemStackNetResultName\@ItemStackNetResultMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemStackNetResult\@\@\@Z
     */
    MCAPI static std::string const& getItemStackNetResultName(enum class ItemStackNetResult);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mMap\@ItemStackNetResultMap\@\@0V?$BidirectionalUnorderedMap\@W4ItemStackNetResult\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemStackNetResult, std::string> const mMap;
    // NOLINTEND
};
