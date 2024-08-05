#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PackedVisibleMobEffects { struct VisibleMobEffect; }
// clang-format on

namespace PackedVisibleMobEffects {
// NOLINTBEGIN
MCAPI int64 packVisibleEffects(std::vector<class MobEffectInstance> const&);

MCAPI std::vector<struct PackedVisibleMobEffects::VisibleMobEffect> unpackVisibleEffects(int64);
// NOLINTEND

}; // namespace PackedVisibleMobEffects
