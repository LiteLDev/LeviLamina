#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

namespace VanillaBlockConversion {
// NOLINTBEGIN
/**
 * @symbol ?getBlockTypeFromLegacyId\@VanillaBlockConversion\@\@YA?AV?$WeakPtr\@VBlockLegacy\@\@\@\@I\@Z
 */
MCAPI class WeakPtr<class BlockLegacy> getBlockTypeFromLegacyId(uint32_t);
/**
 * @symbol
 * ?getBlockTypeLegacyIdFromName\@VanillaBlockConversion\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI int32_t getBlockTypeLegacyIdFromName(std::string const&);
/**
 * @symbol ?tryGetLegacyState\@VanillaBlockConversion\@\@YAPEBVBlock\@\@II\@Z
 */
MCAPI class Block const* tryGetLegacyState(uint32_t, uint32_t);
// NOLINTEND

}; // namespace VanillaBlockConversion
