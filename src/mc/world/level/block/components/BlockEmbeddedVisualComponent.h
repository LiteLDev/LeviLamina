#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 8>  mUnk8530a9;
        ::ll::UntypedStorage<8, 8>  mUnkb1fc8e;
        ::ll::UntypedStorage<4, 64> mUnka6a88b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGeometryComponent>>          mGeometry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockMaterialInstancesComponent>> mMaterialInstances;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockBakedMaterialDataComponent>> mBakedBlockMaterialData;
    // NOLINTEND
};
