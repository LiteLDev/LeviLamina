/**
 * @file  ItemStackBaseComponentsHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackBaseComponentsHelper.
 *
 */
class ItemStackBaseComponentsHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKBASECOMPONENTSHELPER
public:
    class ItemStackBaseComponentsHelper& operator=(class ItemStackBaseComponentsHelper const &) = delete;
    ItemStackBaseComponentsHelper(class ItemStackBaseComponentsHelper const &) = delete;
    ItemStackBaseComponentsHelper() = delete;
#endif

public:
    /**
     * @symbol  ?isValidComponent\@ItemStackBaseComponentsHelper\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isValidComponent(std::string const &);
    /**
     * @symbol  ?updateComponent\@ItemStackBaseComponentsHelper\@\@SA_NAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static bool updateComponent(class ItemStackBase &, std::string const &, class Json::Value const &);

};