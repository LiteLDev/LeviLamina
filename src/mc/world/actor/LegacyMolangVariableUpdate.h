#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Mob;
class RenderParams;
struct LegacyMolangVariableComponent;
// clang-format on

namespace LegacyMolangVariableUpdate {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<::HashedString, 24> getEnderDragonHistoricalFrameVariables();

MCNAPI void updateEntitySpecificMolangVariables(
    ::Mob&                                 mob,
    ::LegacyMolangVariableComponent const& molangVariableComponent,
    ::RenderParams&                        renderParams
);
// NOLINTEND

} // namespace LegacyMolangVariableUpdate
