#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct VoxelShapesPacketPayload;
namespace VoxelShapes { struct SerializableVoxelShape; }
// clang-format on

namespace VoxelShapesPacketAnon {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::VoxelShapes::SerializableVoxelShape>
getShapesAsSerializable(::VoxelShapesPacketPayload const& payload);

MCAPI void setShapesFromSerializable(
    ::VoxelShapesPacketPayload&                          payload,
    ::std::vector<::VoxelShapes::SerializableVoxelShape> serializable
);
// NOLINTEND

} // namespace VoxelShapesPacketAnon
