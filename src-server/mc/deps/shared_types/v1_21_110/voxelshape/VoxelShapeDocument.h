#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 32> mUnk304f0b;
    ::ll::UntypedStorage<8, 24> mUnk2e3f86;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeDocument& operator=(VoxelShapeDocument const&);
    VoxelShapeDocument(VoxelShapeDocument const&);
    VoxelShapeDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VoxelShapeDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
