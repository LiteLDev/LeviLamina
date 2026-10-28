#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/biome/BiomeComponents.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct BiomeComponents : public ::SharedTypes::v1_26_30::BiomeComponents {
public:
    // BiomeComponents inner types define
    using Parent = ::SharedTypes::v1_26_30::BiomeComponents;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx, ::std::set<::std::string> const& activeExperiments);
    // NOLINTEND
};

} // namespace SharedTypes::Beta
