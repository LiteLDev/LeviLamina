#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/PaletteColor.h"

// auto generated forward declare list
// clang-format off
struct SynchedActorDataComponent;
// clang-format on

namespace ActorColor {
// functions
// NOLINTBEGIN
MCAPI ::SharedTypes::Legacy::PaletteColor getColor(::SynchedActorDataComponent const& entityData);

MCAPI ::SharedTypes::Legacy::PaletteColor getColor2(::SynchedActorDataComponent const& entityData);

MCAPI void setColor(::SynchedActorDataComponent& entityData, ::SharedTypes::Legacy::PaletteColor color);

MCAPI void setColor2(::SynchedActorDataComponent& entityData, ::SharedTypes::Legacy::PaletteColor color);
// NOLINTEND

}
