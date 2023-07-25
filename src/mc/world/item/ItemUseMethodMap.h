#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class ItemUseMethodMap {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEMETHODMAP
public:
    ItemUseMethodMap& operator=(ItemUseMethodMap const&) = delete;
    ItemUseMethodMap(ItemUseMethodMap const&)            = delete;
    ItemUseMethodMap()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?getItemUseMethodName\@ItemUseMethodMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemUseMethod\@\@\@Z
     */
    MCAPI static std::string const& getItemUseMethodName(enum class ItemUseMethod);

    // private:

private:
    /**
     * @symbol
     * ?mMap\@ItemUseMethodMap\@\@0V?$BidirectionalUnorderedMap\@W4ItemUseMethod\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseMethod, std::string> const mMap;
};
