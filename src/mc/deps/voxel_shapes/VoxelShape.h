#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/voxel_shapes/JoinOperation.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace VoxelShapes { class Cells; }
// clang-format on

namespace VoxelShapes {

class VoxelShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk9b9849;
    ::ll::UntypedStorage<8, 64> mUnk59db2d;
    ::ll::UntypedStorage<8, 64> mUnkf40926;
    ::ll::UntypedStorage<8, 64> mUnk6df05e;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShape& operator=(VoxelShape const&);
    VoxelShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoxelShape(::VoxelShapes::VoxelShape&&);

    MCNAPI VoxelShape(::VoxelShapes::VoxelShape const&);

    MCNAPI VoxelShape(
        ::VoxelShapes::Cells               cells,
        ::Bedrock::small_vector<float, 12> xCoords,
        ::Bedrock::small_vector<float, 12> yCoords,
        ::Bedrock::small_vector<float, 12> zCoords
    );

    MCNAPI ::VoxelShapes::VoxelShape computeFaceShape(uchar face) const;

    MCNAPI ::VoxelShapes::VoxelShape& operator=(::VoxelShapes::VoxelShape&&);

    MCNAPI bool operator==(::VoxelShapes::VoxelShape const&) const;

    MCNAPI void rotate(::Vec3 const& rotationDegrees, ::Vec3 const& rotationPivot);

    MCNAPI ::std::vector<::AABB> toAabbs() const;

    MCNAPI ~VoxelShape();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::VoxelShapes::VoxelShape
    createCuboidShape(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax);

    MCNAPI static ::VoxelShapes::VoxelShape createEmptyShape();

    MCNAPI static ::VoxelShapes::VoxelShape join(
        ::VoxelShapes::VoxelShape const& first,
        ::VoxelShapes::VoxelShape const& second,
        ::VoxelShapes::JoinOperation     operation
    );

    MCNAPI_C static bool joinIsNotEmpty(
        ::VoxelShapes::VoxelShape const& first,
        ::VoxelShapes::VoxelShape const& second,
        ::VoxelShapes::JoinOperation     operation
    );

    MCNAPI static ::VoxelShapes::VoxelShape joinUnoptimized(
        ::VoxelShapes::VoxelShape const& first,
        ::VoxelShapes::VoxelShape const& second,
        ::VoxelShapes::JoinOperation     operation
    );

    MCNAPI static ::VoxelShapes::VoxelShape transform(
        ::VoxelShapes::VoxelShape shape,
        ::Vec3 const&             scale,
        ::Vec3 const&             scalePivot,
        ::Vec3 const&             rotation,
        ::Vec3 const&             rotationPivot,
        ::Vec3 const&             translation
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::VoxelShapes::VoxelShape const& emptyShape();

    MCNAPI static ::VoxelShapes::VoxelShape const& unitCubeShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::VoxelShapes::VoxelShape&&);

    MCNAPI void* $ctor(::VoxelShapes::VoxelShape const&);

    MCNAPI void* $ctor(
        ::VoxelShapes::Cells               cells,
        ::Bedrock::small_vector<float, 12> xCoords,
        ::Bedrock::small_vector<float, 12> yCoords,
        ::Bedrock::small_vector<float, 12> zCoords
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
