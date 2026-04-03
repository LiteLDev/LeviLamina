#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct BlockedDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mStopsFlowDirectionsMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindBlockedDirections(::cereal::ReflectionCtx& ctx);

    MCAPI static void facingVectorToMask(
        ::SharedTypes::v1_26_0::BlockedDirections&  instance,
        ::std::vector<::SharedTypes::Facing> const& faces
    );

    MCAPI static ::std::vector<::SharedTypes::Facing>
    maskToFacingVector(::SharedTypes::v1_26_0::BlockedDirections const& instance);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
