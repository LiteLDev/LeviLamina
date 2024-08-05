#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemDynamicPropertiesHelper {
// NOLINTBEGIN
MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
getDynamicProperty(class ItemStackBase const&, std::string const&, std::string const&, struct cereal::ReflectionCtx const&);

MCAPI void
setDynamicProperty(class ItemStackBase&, std::string const&, std::variant<double, float, bool, std::string, class Vec3> const&, std::string const&, struct cereal::ReflectionCtx const&);
// NOLINTEND

}; // namespace ItemDynamicPropertiesHelper
