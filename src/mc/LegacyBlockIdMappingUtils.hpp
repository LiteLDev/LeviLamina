/**
 * @file  LegacyBlockIdMappingUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace LegacyBlockIdMappingUtils.
 *
 */
namespace LegacyBlockIdMappingUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?addLegacyBlockIdMapping\@LegacyBlockIdMappingUtils\@\@YAXAEBVBlockLegacy\@\@_K\@Z
     */
    MCAPI void addLegacyBlockIdMapping(class BlockLegacy const &, unsigned __int64);
    /**
     * @symbol  ?addLegacyBlockIdMappings\@LegacyBlockIdMappingUtils\@\@YAXXZ
     */
    MCAPI void addLegacyBlockIdMappings();
    /**
     * @symbol  ?mBlockIdToVanillaBlockTypesMap\@LegacyBlockIdMappingUtils\@\@3V?$unordered_map\@IV?$WeakPtr\@VBlockLegacy\@\@\@\@U?$hash\@I\@std\@\@U?$equal_to\@I\@3\@V?$allocator\@U?$pair\@$$CBIV?$WeakPtr\@VBlockLegacy\@\@\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI extern class std::unordered_map<unsigned int, class WeakPtr<class BlockLegacy>, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, class WeakPtr<class BlockLegacy>>>> mBlockIdToVanillaBlockTypesMap;
    /**
     * @symbol  ?mBlockNameToBlockIdMap\@LegacyBlockIdMappingUtils\@\@3V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI extern class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mBlockNameToBlockIdMap;

};