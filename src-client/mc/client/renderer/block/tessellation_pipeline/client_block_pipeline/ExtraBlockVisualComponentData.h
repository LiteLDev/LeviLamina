#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

namespace ClientBlockPipeline {

struct ExtraBlockVisualComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mBakedBlockMaterialData;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
