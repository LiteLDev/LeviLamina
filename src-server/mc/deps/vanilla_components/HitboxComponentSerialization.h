#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HitboxComponent;
// clang-format on

namespace HitboxComponentSerialization {
// functions
// NOLINTBEGIN
MCAPI void fromCompoundTag(::HitboxComponent& result, ::CompoundTag const& tag);

MCAPI void toCompoundTag(::HitboxComponent const& source, ::CompoundTag& tag);
// NOLINTEND

}
