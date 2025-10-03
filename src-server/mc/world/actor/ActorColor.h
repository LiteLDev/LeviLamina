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
MCNAPI ::SharedTypes::Legacy::PaletteColor getColor(::SynchedActorDataComponent const& entityData);

MCNAPI ::SharedTypes::Legacy::PaletteColor getColor2(::SynchedActorDataComponent const& entityData);

MCNAPI void setColor(::SynchedActorDataComponent& entityData, ::SharedTypes::Legacy::PaletteColor color);

MCNAPI void setColor2(::SynchedActorDataComponent& entityData, ::SharedTypes::Legacy::PaletteColor color);
// NOLINTEND

} // namespace ActorColor
