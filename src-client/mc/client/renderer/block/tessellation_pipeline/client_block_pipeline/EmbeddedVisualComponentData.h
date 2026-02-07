#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
// clang-format on

namespace ClientBlockPipeline {

struct EmbeddedVisualComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
    ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mBakedBlockMaterialData;
    ::ll::TypedStorage<4, 64, ::Matrix const>                          mTransform;
    // NOLINTEND

public:
    // prevent constructor by default
    EmbeddedVisualComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EmbeddedVisualComponentData(::Block const& block);

    MCAPI ::Matrix _getTransform(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Block const& block);
    // NOLINTEND
};

} // namespace ClientBlockPipeline
