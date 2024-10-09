#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemDynamicPropertiesHelper {
// NOLINTBEGIN
MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>> getDynamicProperty(
    class ItemStackBase const&          item,
    std::string const&                  key,
    std::string const&                  collectionName,
    struct cereal::ReflectionCtx const& ctx
);

MCAPI void setDynamicProperty(
    class ItemStackBase&                                              item,
    std::string const&                                                key,
    std::variant<double, float, bool, std::string, class Vec3> const& value,
    std::string const&                                                collectionName,
    struct cereal::ReflectionCtx const&                               ctx
);
// NOLINTEND

}; // namespace ItemDynamicPropertiesHelper
