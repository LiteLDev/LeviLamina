#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

namespace VanillaBlockConversion {
// NOLINTBEGIN
// symbol: ?getBlockTypeFromLegacyId@VanillaBlockConversion@@YA?AV?$WeakPtr@$$CBVBlockLegacy@@@@I@Z
MCAPI class WeakPtr<class BlockLegacy const> getBlockTypeFromLegacyId(uint id);

// symbol:
// ?getBlockTypeLegacyIdFromName@VanillaBlockConversion@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI int getBlockTypeLegacyIdFromName(std::string const& rawName);

// symbol: ?tryGetLegacyState@VanillaBlockConversion@@YAPEBVBlock@@II@Z
MCAPI class Block const* tryGetLegacyState(uint id, uint data);
// NOLINTEND

}; // namespace VanillaBlockConversion
