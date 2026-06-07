#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct AttributesComponent;
// clang-format on

namespace TickAttributesSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickAttributesCommon(bool isClientSide, ::AttributesComponent& attributesComponent);

MCAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace TickAttributesSystem
