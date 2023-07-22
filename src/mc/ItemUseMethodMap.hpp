/**
 * @file  ItemUseMethodMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemUseMethodMap.
 *
 */
class ItemUseMethodMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEMETHODMAP
public:
    class ItemUseMethodMap& operator=(class ItemUseMethodMap const &) = delete;
    ItemUseMethodMap(class ItemUseMethodMap const &) = delete;
    ItemUseMethodMap() = delete;
#endif

public:
    /**
     * @symbol  ?getItemUseMethodName\@ItemUseMethodMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemUseMethod\@\@\@Z
     */
    MCAPI static std::string const & getItemUseMethodName(enum class ItemUseMethod);

//private:

private:
    /**
     * @symbol  ?mMap\@ItemUseMethodMap\@\@0V?$BidirectionalUnorderedMap\@W4ItemUseMethod\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseMethod, std::string> const mMap;

};