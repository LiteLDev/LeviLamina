#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/biome/BiomeComponents.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct BiomeComponents : public ::SharedTypes::v1_26_0::BiomeComponents {
public:
    // BiomeComponents inner types define
    using Parent = ::SharedTypes::v1_26_0::BiomeComponents;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
