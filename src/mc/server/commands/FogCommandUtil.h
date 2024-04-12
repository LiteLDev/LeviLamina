#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FogCommandUtil {
// NOLINTBEGIN
// symbol:
// ?pop@FogCommandUtil@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVCommandOutput@@AEAVPlayer@@AEAVFogCommandComponent@@@Z
MCAPI bool
pop(std::string const&,
    std::string const&         userProvidedId,
    class CommandOutput&       output,
    class Player&              target,
    class FogCommandComponent& fogCommandComponent);

// symbol:
// ?push@FogCommandUtil@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVCommandOutput@@AEAVPlayer@@AEAVFogCommandComponent@@@Z
MCAPI bool push(
    std::string const&         fogId,
    std::string const&         userProvidedId,
    class CommandOutput&       output,
    class Player&              target,
    class FogCommandComponent& fogCommandComponent
);

// symbol:
// ?remove@FogCommandUtil@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAVCommandOutput@@AEAVPlayer@@AEAVFogCommandComponent@@@Z
MCAPI bool remove(
    std::string const&,
    std::string const&         userProvidedId,
    class CommandOutput&       output,
    class Player&              target,
    class FogCommandComponent& fogCommandComponent
);
// NOLINTEND

}; // namespace FogCommandUtil
