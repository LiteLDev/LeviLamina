#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryComponent;
struct BlockMaterialInstancesComponent;
// clang-format on

struct BlockEmbeddedVisualComponent {
public:
    // BlockEmbeddedVisualComponent inner types define
    enum class Correction : uchar {
        None              = 0,
        FlowerPotPreR26U2 = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGeometryComponent>>          mGeometry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockMaterialInstancesComponent>> mMaterialInstances;
    ::ll::TypedStorage<1, 1, ::BlockEmbeddedVisualComponent::Correction>           mCorrection;
    // NOLINTEND
};
