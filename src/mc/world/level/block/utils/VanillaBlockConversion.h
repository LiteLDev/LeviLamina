#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class WeakPtr;
// clang-format on

namespace VanillaBlockConversion {
/**
 * @symbol ?getBlockTypeFromLegacyId\@VanillaBlockConversion\@\@YA?AV?$WeakPtr\@VBlockLegacy\@\@\@\@I\@Z
 */
MCAPI class WeakPtr<class BlockLegacy> getBlockTypeFromLegacyId(unsigned int);
/**
 * @symbol
 * ?getBlockTypeLegacyIdFromName\@VanillaBlockConversion\@\@YAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI int getBlockTypeLegacyIdFromName(std::string const&);
/**
 * @symbol ?tryGetLegacyState\@VanillaBlockConversion\@\@YAPEBVBlock\@\@II\@Z
 */
MCAPI class Block const* tryGetLegacyState(unsigned int, unsigned int);

}; // namespace VanillaBlockConversion
