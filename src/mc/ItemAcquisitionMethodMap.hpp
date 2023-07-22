/**
 * @file  ItemAcquisitionMethodMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemAcquisitionMethodMap.
 *
 */
class ItemAcquisitionMethodMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACQUISITIONMETHODMAP
public:
    class ItemAcquisitionMethodMap& operator=(class ItemAcquisitionMethodMap const &) = delete;
    ItemAcquisitionMethodMap(class ItemAcquisitionMethodMap const &) = delete;
    ItemAcquisitionMethodMap() = delete;
#endif

public:

//private:

private:
    /**
     * @symbol  ?mMap\@ItemAcquisitionMethodMap\@\@0V?$BidirectionalUnorderedMap\@W4ItemAcquisitionMethod\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemAcquisitionMethod, std::string> const mMap;

};