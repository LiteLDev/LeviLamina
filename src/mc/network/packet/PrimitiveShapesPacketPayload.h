#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
// clang-format on

struct PrimitiveShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PrimitiveShapeDataPayload>> mShapes;
    // NOLINTEND
};
