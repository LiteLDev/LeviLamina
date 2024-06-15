#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PackedVisibleMobEffects { struct VisibleMobEffect; }
// clang-format on

namespace PackedVisibleMobEffects {
// NOLINTBEGIN
// symbol:
// ?packVisibleEffects@PackedVisibleMobEffects@@YA_JAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@@Z
MCAPI int64 packVisibleEffects(std::vector<class MobEffectInstance> const&);

// symbol:
// ?unpackVisibleEffects@PackedVisibleMobEffects@@YA?AV?$vector@UVisibleMobEffect@PackedVisibleMobEffects@@V?$allocator@UVisibleMobEffect@PackedVisibleMobEffects@@@std@@@std@@_J@Z
MCAPI std::vector<struct PackedVisibleMobEffects::VisibleMobEffect> unpackVisibleEffects(int64);
// NOLINTEND

}; // namespace PackedVisibleMobEffects
