#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BakedMaterialMap; }
// clang-format on

struct BlockBakedMaterialDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::ClientBlockPipeline::BakedMaterialMap> mBakedMaterials;
    ::ll::TypedStorage<1, 1, bool>                                     mIsSolidOpaque;
    // NOLINTEND
};
