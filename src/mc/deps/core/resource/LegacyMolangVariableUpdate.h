#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LegacyMolangVariableUpdate {
// NOLINTBEGIN
MCAPI void
updateEntitySpecificMolangVariables(class Mob&, struct LegacyMolangVariableComponent const&, class RenderParams&);

MCAPI void updateMobVariables(class Mob&, class MolangVariableMap&, class RenderParams&);
// NOLINTEND

}; // namespace LegacyMolangVariableUpdate
