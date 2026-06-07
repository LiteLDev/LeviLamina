#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DynamicProperties;
class ItemStackBase;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemDynamicPropertiesHelper {
// functions
// NOLINTBEGIN
MCAPI bool clearAllDynamicProperties(::ItemStackBase& item, ::std::string const& collection);

MCAPI ::std::unique_ptr<::DynamicProperties>
getDynamicProperties(::ItemStackBase const& item, ::cereal::ReflectionCtx const& ctx);

MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> getDynamicProperty(
    ::ItemStackBase const&         item,
    ::std::string const&           key,
    ::std::string const&           collectionName,
    ::cereal::ReflectionCtx const& ctx
);

MCAPI bool removeDynamicProperty(::ItemStackBase& item, ::std::string const& key, ::std::string const& collectionName);

MCAPI void setDynamicProperty(
    ::ItemStackBase&                                                  item,
    ::std::string const&                                              key,
    ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
    ::std::string const&                                              collectionName,
    ::cereal::ReflectionCtx const&                                    ctx
);
// NOLINTEND

} // namespace ItemDynamicPropertiesHelper
