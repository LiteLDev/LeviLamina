/**
 * @file  ItemStackNetResultMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackNetResultMap.
 *
 */
class ItemStackNetResultMap {

#define AFTER_EXTRA
// Add Member There
public:
    inline static class BidirectionalUnorderedMap<enum class ItemStackNetResult, std::string > const& getMap() {
        return mMap;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETRESULTMAP
public:
    class ItemStackNetResultMap& operator=(class ItemStackNetResultMap const &) = delete;
    ItemStackNetResultMap(class ItemStackNetResultMap const &) = delete;
    ItemStackNetResultMap() = delete;
#endif

public:
    /**
     * @symbol  ?getItemStackNetResultName\@ItemStackNetResultMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemStackNetResult\@\@\@Z
     */
    MCAPI static std::string const & getItemStackNetResultName(enum class ItemStackNetResult);

//private:

private:
    /**
     * @symbol  ?mMap\@ItemStackNetResultMap\@\@0V?$BidirectionalUnorderedMap\@W4ItemStackNetResult\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemStackNetResult, std::string> const mMap;

};