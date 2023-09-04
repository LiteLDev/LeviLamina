#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace CryptoUtils {
// NOLINTBEGIN
// symbol:
// ?getDirectroyChecksum@CryptoUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
MCAPI std::string getDirectroyChecksum(class Core::Path const&);

// symbol:
// ?getFileChecksum@CryptoUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
MCAPI std::string getFileChecksum(class Core::Path const&);
// NOLINTEND

}; // namespace CryptoUtils
