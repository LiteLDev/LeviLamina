#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LegacyMolangVariableUpdate {
// NOLINTBEGIN
MCAPI void updateEntitySpecificMolangVariables(
    class Mob&                                  mob,
    struct LegacyMolangVariableComponent const& molangVariableComponent,
    class RenderParams&                         renderParams
);

MCAPI void
updateMobVariables(class Mob& mob, class MolangVariableMap& molangVariables, class RenderParams& renderParams);
// NOLINTEND

}; // namespace LegacyMolangVariableUpdate
