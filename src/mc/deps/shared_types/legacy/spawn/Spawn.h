#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy::Spawn { struct BiomeConditions; }
namespace SharedTypes::Legacy::Spawn { struct Herd; }
namespace SharedTypes::Legacy::Spawn { struct MobEventFilter; }
// clang-format on

namespace SharedTypes::Legacy::Spawn {
// functions
// NOLINTBEGIN
MCAPI bool operator==(
    ::SharedTypes::Legacy::Spawn::BiomeConditions const& __P0,
    ::SharedTypes::Legacy::Spawn::BiomeConditions const& __P1
);

MCFOLD bool operator==(::SharedTypes::Legacy::Spawn::Herd const& __P0, ::SharedTypes::Legacy::Spawn::Herd const& __P1);

MCFOLD bool operator==(
    ::SharedTypes::Legacy::Spawn::MobEventFilter const& __P0,
    ::SharedTypes::Legacy::Spawn::MobEventFilter const& __P1
);
// NOLINTEND

} // namespace SharedTypes::Legacy::Spawn
