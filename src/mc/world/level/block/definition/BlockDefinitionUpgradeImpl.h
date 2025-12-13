#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace SharedTypes::v1_21_110::BlockDefinition { struct BlockComponents; }
// clang-format on

namespace BlockDefinitionUpgradeImpl {
// functions
// NOLINTBEGIN
MCNAPI void transformDisplayName(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCNAPI void transformLightDampening(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCNAPI void transformLightEmission(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);
// NOLINTEND

} // namespace BlockDefinitionUpgradeImpl
