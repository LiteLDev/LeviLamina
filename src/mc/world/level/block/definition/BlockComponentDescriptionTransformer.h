#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace SharedTypes::v1_26_10::BlockDefinition { struct BlockComponents; }
// clang-format on

struct BlockComponentDescriptionTransformer {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void transform(
        ::BlockComponentDescription const&                         blockComponentDescription,
        ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
    );
    // NOLINTEND
};
