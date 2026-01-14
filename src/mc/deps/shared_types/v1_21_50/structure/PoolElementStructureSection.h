#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/structure/BoundingBox.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_50 { struct JigsawJunction; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct PoolElementStructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                          mElementID;
    ::ll::TypedStorage<4, 4, int>                                                     mGroundOffset;
    ::ll::TypedStorage<4, 24, ::SharedTypes::v1_21_50::BoundingBox>                   mBoundingBox;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mPosition;
    ::ll::TypedStorage<1, 1, ::Rotation>                                              mRotation;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::JigsawJunction>> mJunctions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PoolElementStructureSection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
