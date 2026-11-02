#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockComponents; }
// clang-format on

struct BlockComponentsUpgradeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void upgrade(
        ::BlockComponentDescription const&                         blockComponentDescription,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockComponents& blockComponents
    );
    // NOLINTEND
};
