#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/voxelshape/Description.h"
#include "mc/deps/shared_types/v1_21_110/voxelshape/Shape.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct VoxelShapeDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_110::Description> mDescription;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_110::Shape>       mShape;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeDocument& operator=(VoxelShapeDocument const&);
    VoxelShapeDocument(VoxelShapeDocument const&);
    VoxelShapeDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_110::VoxelShapeDocument& operator=(::SharedTypes::v1_21_110::VoxelShapeDocument&&);

    MCAPI ~VoxelShapeDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
