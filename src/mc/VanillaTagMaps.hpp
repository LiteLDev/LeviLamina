/**
 * @file  VanillaTagMaps.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VanillaTagMaps.
 *
 */
namespace VanillaTagMaps {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?BlockNameIdToTagsMap\@VanillaTagMaps\@\@3V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI extern class std::unordered_map<std::string, std::vector<class HashedString>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<class HashedString>>>> const BlockNameIdToTagsMap;
    /**
     * @symbol  ?ItemNameIdToTagsMap\@VanillaTagMaps\@\@3V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI extern class std::unordered_map<std::string, std::vector<class HashedString>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<class HashedString>>>> const ItemNameIdToTagsMap;

};