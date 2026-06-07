#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
// clang-format on

struct PrimitiveShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PrimitiveShapeDataPayload>> mShapes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addShapeToPacket(::ScriptModuleMinecraft::ScriptPrimitiveShape& shape, bool serializeFully);
    // NOLINTEND
};
