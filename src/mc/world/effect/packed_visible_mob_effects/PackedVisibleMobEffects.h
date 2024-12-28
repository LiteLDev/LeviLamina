#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
namespace PackedVisibleMobEffects { struct VisibleMobEffect; }
// clang-format on

namespace PackedVisibleMobEffects {
// functions
// NOLINTBEGIN
MCAPI int64 packVisibleEffects(::std::vector<::MobEffectInstance> const& mobEffects);

MCAPI ::std::vector<::PackedVisibleMobEffects::VisibleMobEffect> unpackVisibleEffects(int64 packedVisibleMobEffects);
// NOLINTEND

} // namespace PackedVisibleMobEffects
