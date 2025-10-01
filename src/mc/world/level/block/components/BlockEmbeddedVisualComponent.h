#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

// auto generated forward declare list
// clang-format off
struct BlockBakedMaterialDataComponent;
struct BlockGeometryComponent;
struct BlockMaterialInstancesComponent;
// clang-format on

struct BlockEmbeddedVisualComponent {
public:
    // BlockEmbeddedVisualComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // BlockEmbeddedVisualComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>          mGeometry;
        ::ll::TypedStorage<8, 8, ::BlockBakedMaterialDataComponent const*> mBakedBlockMaterialData;
        ::ll::TypedStorage<4, 64, ::Matrix const>                          mTransform;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGeometryComponent>>          mGeometry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockMaterialInstancesComponent>> mMaterialInstances;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockBakedMaterialDataComponent>> mBakedBlockMaterialData;
    // NOLINTEND
};
