#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
