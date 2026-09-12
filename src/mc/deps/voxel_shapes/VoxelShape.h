#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/voxel_shapes/Cells.h"
#include "mc/deps/voxel_shapes/JoinOperation.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace VoxelShapes { struct SerializableVoxelShape; }
// clang-format on

namespace VoxelShapes {

class VoxelShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::VoxelShapes::Cells>               mCells;
    ::ll::TypedStorage<8, 64, ::Bedrock::small_vector<float, 12>> mXCoords;
    ::ll::TypedStorage<8, 64, ::Bedrock::small_vector<float, 12>> mYCoords;
    ::ll::TypedStorage<8, 64, ::Bedrock::small_vector<float, 12>> mZCoords;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShape& operator=(VoxelShape const&);
    VoxelShape();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VoxelShape(::VoxelShapes::VoxelShape&&);

    MCAPI VoxelShape(::VoxelShapes::VoxelShape const&);

    MCAPI VoxelShape(
        ::VoxelShapes::Cells               cells,
        ::Bedrock::small_vector<float, 12> xCoords,
        ::Bedrock::small_vector<float, 12> yCoords,
        ::Bedrock::small_vector<float, 12> zCoords
    );

    MCAPI ::VoxelShapes::VoxelShape computeFaceShape(uchar face) const;

    MCAPI ::VoxelShapes::VoxelShape& operator=(::VoxelShapes::VoxelShape&&);

    MCAPI bool operator==(::VoxelShapes::VoxelShape const& rhs) const;

    MCAPI ::VoxelShapes::SerializableVoxelShape toSerializable() const;

    MCAPI ~VoxelShape();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::VoxelShapes::VoxelShape
    createCuboidShape(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax);

    MCAPI static ::VoxelShapes::VoxelShape createEmptyShape();

    MCAPI static ::VoxelShapes::VoxelShape createShapeFromAabbs(::gsl::span<::AABB const> boxes);

    MCAPI static ::VoxelShapes::VoxelShape fromSerializable(::VoxelShapes::SerializableVoxelShape const& serializable);

#ifdef LL_PLAT_C
    MCAPI static bool joinIsNotEmpty(
        ::VoxelShapes::VoxelShape const& first,
        ::VoxelShapes::VoxelShape const& second,
        ::VoxelShapes::JoinOperation     operation
    );
#endif

    MCAPI static ::VoxelShapes::VoxelShape joinUnoptimized(
        ::VoxelShapes::VoxelShape const& first,
        ::VoxelShapes::VoxelShape const& second,
        ::VoxelShapes::JoinOperation     operation
    );

    MCAPI static ::VoxelShapes::VoxelShape transform(
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
    MCAPI static ::VoxelShapes::VoxelShape const& emptyShape();

    MCAPI static ::VoxelShapes::VoxelShape const& unitCubeShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::VoxelShapes::VoxelShape&&);

    MCAPI void* $ctor(::VoxelShapes::VoxelShape const&);

    MCAPI void* $ctor(
        ::VoxelShapes::Cells               cells,
        ::Bedrock::small_vector<float, 12> xCoords,
        ::Bedrock::small_vector<float, 12> yCoords,
        ::Bedrock::small_vector<float, 12> zCoords
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
