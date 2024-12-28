#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {
// functions
// NOLINTBEGIN
MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_20_50::BlockDescriptor::Compound const& a,
    ::SharedTypes::v1_20_50::BlockDescriptor::Compound const& b
);

MCAPI bool
operator==(::SharedTypes::v1_20_50::BlockDescriptor const& a, ::SharedTypes::v1_20_50::BlockDescriptor const& b);
// NOLINTEND

} // namespace SharedTypes::v1_20_50
