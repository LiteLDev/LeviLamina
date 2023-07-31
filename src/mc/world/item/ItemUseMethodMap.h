#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class ItemUseMethodMap {

public:
    // prevent constructor by default
    ItemUseMethodMap& operator=(ItemUseMethodMap const&) = delete;
    ItemUseMethodMap(ItemUseMethodMap const&)            = delete;
    ItemUseMethodMap()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getItemUseMethodName\@ItemUseMethodMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemUseMethod\@\@\@Z
     */
    MCAPI static std::string const& getItemUseMethodName(enum class ItemUseMethod);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mMap\@ItemUseMethodMap\@\@0V?$BidirectionalUnorderedMap\@W4ItemUseMethod\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseMethod, std::string> const mMap;
    // NOLINTEND
};
