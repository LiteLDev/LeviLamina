#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LegacyMolangVariableUpdate {
// NOLINTBEGIN
// symbol:
// ?updateEntitySpecificMolangVariables@LegacyMolangVariableUpdate@@YAXAEAVMob@@AEBULegacyMolangVariableComponent@@AEAVRenderParams@@@Z
MCAPI void
updateEntitySpecificMolangVariables(class Mob&, struct LegacyMolangVariableComponent const&, class RenderParams&);

// symbol: ?updateMobVariables@LegacyMolangVariableUpdate@@YAXAEAVMob@@AEAVMolangVariableMap@@AEAVRenderParams@@@Z
MCAPI void updateMobVariables(class Mob&, class MolangVariableMap&, class RenderParams&);
// NOLINTEND

}; // namespace LegacyMolangVariableUpdate
