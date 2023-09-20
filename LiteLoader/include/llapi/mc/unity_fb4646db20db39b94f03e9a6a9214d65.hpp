/**
 * @file  unity_fb4646db20db39b94f03e9a6a9214d65.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace unity_fb4646db20db39b94f03e9a6a9214d65 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getAuxValueOrLegacy\@unity_fb4646db20db39b94f03e9a6a9214d65\@\@YAFQEBVItem\@\@\@Z
     */
    MCAPI short getAuxValueOrLegacy(class Item const *const);
    /**
     * @symbol ?getIdOrLegacyId\@unity_fb4646db20db39b94f03e9a6a9214d65\@\@YAFQEBVItem\@\@\@Z
     */
    MCAPI short getIdOrLegacyId(class Item const *const);
    /**
     * @symbol ?getLegacyAuxValue\@unity_fb4646db20db39b94f03e9a6a9214d65\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAF\@Z
     */
    MCAPI bool getLegacyAuxValue(std::string const &, short &);
    /**
     * @symbol ?legacyIdMap\@unity_fb4646db20db39b94f03e9a6a9214d65\@\@3V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$pair\@FF\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$pair\@FF\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI extern class std::unordered_map<std::string, struct std::pair<short, short>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct std::pair<short, short>>>> legacyIdMap;

};