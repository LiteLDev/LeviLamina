#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class ActorLocation : int {
    Feet              = 0,
    Body              = 1,
    WeaponAttachPoint = 2,
    Head              = 3,
    DropAttachPoint   = 4,
    ExplosionPoint    = 5,
    Eyes              = 6,
    BreathingPoint    = 7,
    Mouth             = 8,
    Count             = 9,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::SharedTypes::Legacy::ActorLocation>();
// clang-format on
