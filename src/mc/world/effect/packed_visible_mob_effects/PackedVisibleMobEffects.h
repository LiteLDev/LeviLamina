#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace PackedVisibleMobEffects { struct VisibleMobEffect; }
// clang-format on

namespace PackedVisibleMobEffects {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::small_vector<::PackedVisibleMobEffects::VisibleMobEffect, 8>
unpackVisibleEffects(int64 packedVisibleMobEffects);
// NOLINTEND

} // namespace PackedVisibleMobEffects
