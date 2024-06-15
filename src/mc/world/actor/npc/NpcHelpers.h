#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NpcHelpers {
// NOLINTBEGIN
// symbol:
// ?tryGetScene@NpcHelpers@@YAPEAUNpcDialogueScene@@AEBVWeakEntityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI struct NpcDialogueScene* tryGetScene(class WeakEntityRef const& entityRef, std::string const& scene);
// NOLINTEND

}; // namespace NpcHelpers
