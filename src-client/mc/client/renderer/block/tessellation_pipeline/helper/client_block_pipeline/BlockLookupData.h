#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

// auto generated forward declare list
// clang-format off
class BlockRandomOffsetComponent;
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

namespace ClientBlockPipeline {

struct BlockLookupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mMaterial;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockRandomOffsetComponent const*>      mRandomOffset;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mTransform;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
